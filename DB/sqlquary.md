Oracle SQL


#DB

Build 
CREATE DATABASE dbname CHARACTER SET utf8 COLLATE utf8_general_ci;

Delete
DROP DATABASE dbname;

Show
SHOW databases;	?

Select
USE dbname;



#Table

Schema
Structure and Type

Build
1
2
3
4
5
6
7
8
CREATE TABLE `student` (
    `id`  tinyint NOT NULL ,
    `name`  char(4) NOT NULL ,
    `sex`  enum(‘man’,’woman’) NOT NULL ,
    `address`  varchar(50) NOT NULL ,
    `birthday`  datetime NOT NULL ,
    PRIMARY KEY (`id`)
);

Delete
DROP TABLE tableName

Show table schema
DESC(or EXPLAIN) tableName;

Show table list
SHOW tables;



#Data

Insert
INSERT INTO table_name VALUES (value1, value2, value3,…)
INSERT INTO table_name (column1, column2, column3,...) VALUES (value1, value2, value3,...)
INSERT INTO `student` (`id`, `name`, `sex`, `address`, `birthday`) VALUES (‘3’, 'egoing', ‘man’, 'seoul', '2000-11-16');
INSERT INTO favorite_music (`title`,`musician`, `duration`, `album`) VALUES (‘Chasing Pavements', ‘adel’, '3:30', 19);

Update
UPDATE table_name SET column1=value, column2=value WHERE searchColumn=searchValue
UPDATE `student` SET name='egoing', birthday='2001-4-1' WHERE id=3;

Delete
DELETE FROM table_name [WHERE searchColumn=searchValue]
DELETE FROM student WHERE id = 2;

Delete all data on table
TRUNCATE table_name
TRUNCATE student;

Quary
1
2
3
4
5
SELECT column1, column2 
    [FROM tableName] 
    [GROUP BY column] 
    [ORDER BY column [ASC | DESC]] 
    [LIMIT offset, numberOfRow_Search]
1
SELECT * FROM student;
1
SELECT name, birthday FROM student;
1
SELECT * FROM student WHERE id=3;
1
SELECT * FROM student WHERE sex=‘man’ AND address=‘seoul’;
1
SELECT * FROM student WHERE sex=‘woman’ OR address=‘seoul’;
1
SELECT * FROM student LIMIT 1;
1
2
3
SELECT * FROM student LIMIT 1,1;
SELECT * FROM student LIMIT 2,1;
SELECT * FROM student LIMIT 3,1;
1
SELECT * FROM student WHERE sex=‘man’ LIMIT 2;

Group by
SELECT * FROM tableName GROUP BY searchColumn
select sex from student group by sex;
select sex,sum(distance), avg(distance) from student group by sex;


Order by
SELECT * FROM tableName ORDER BY searchRaw [DESC | ASC]
select * from student order by distance desc;
select * from student order by distance desc, address asc;


Index

DROP TABLE IF EXISTS `student`;
CREATE TABLE `student` (
  `id` tinyint(4) NOT NULL AUTO_INCREMENT,
  `name` char(4) NOT NULL,
  `address` varchar(50) NOT NULL,
  `department` enum('국문과','영문과','컴퓨터공학과','전자공학과','물리학과') NOT NULL,
  `introduction` text NOT NULL,
  `number` char(255) NOT NULL,
  PRIMARY KEY (`id`),
  UNIQUE KEY `idx_number` (`number`) USING BTREE,
  KEY `idx_department` (`department`),
  KEY `idx_department_name` (`department`,`address`),
  FULLTEXT KEY `idx_introduction` (`introduction`)
) ENGINE=MyISAM AUTO_INCREMENT=9 DEFAULT CHARSET=utf8;

	•	primary: 중복되지 않는 유일한 키
	•	normal : 중복을 허용하는 인덱스
	•	unique : 중복을 허용하지 않는 유일한 키
	•	foreign : 다른 테이블과의 관계성을 부여하는 키
	•	full text : 자연어 검색, myisam에서만 지원

Primary key
solo		fast 
select * from student where id=3;

Unique key
Multiple	fast
select * from student where number=0534543;

Normal key
Multiple	slow
select * from student where department='국문과'

Full text
Vary by DBengine

And key
select * from student where department='국문과' AND address='제주';



Join






강의
{https://opentutorials.org/course/195/1399}

