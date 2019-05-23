Pods error case
===============


1.SWIFT_VERSION
-------------

Symptom

<img src = './pods/error case/docImage/pod_errorname_swiftversion.png' width = '480' height = '360' />

![pod_errorname_swiftversion](./pods/error case/docImage/pod_errorname_swiftversion.png)


Reason

#SWIFT_VERSION not designated on build setting


Solution

#ADD SWIFT_VERSION attribute in build setting


Remark

https://stackoverflow.com/questions/46338588/xcode-9-swift-language-version-swift-version



2.always embed swift standard libraries
------------------
Symptom
<img src = './pods/error case/docImage/pod_errorname_alwaysembedswiftlibrary' width = '480' height = '360' />
![pod_errorname_swiftversion](./pods/error case/docImage/pod_errorname_alwaysembedswiftlibrary.png)



Reason
#always embed swift standard libraries has overridden



Solution

#ADD (#inherited) on always embed swift standard libraries

Remark
https://stackoverflow.com/questions/40599454/use-the-inherited-flag-or-remove-the-build-settings-from-the-target-c
https://github.com/CocoaPods/CocoaPods/issues/5981
