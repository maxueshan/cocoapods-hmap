//
//  Use this file to import your target's public headers that you would like to expose to Swift.
//

//#include "AppDelegate.h"
#import <AFNetworking/AFNetworking.h>

/**
 /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/swift-frontend -frontend -target x86_64-apple-ios14.5-simulator -enable-objc-interop -sdk /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator15.2.sdk -I /Users/ws/Library/Developer/Xcode/DerivedData/LGApp-fosvozugmnvzjphepojeuknaclrd/Build/Products/Debug-iphonesimulator -F /Users/ws/Library/Developer/Xcode/DerivedData/LGApp-fosvozugmnvzjphepojeuknaclrd/Build/Products/Debug-iphonesimulator -F /Users/ws/Library/Developer/Xcode/DerivedData/LGApp-fosvozugmnvzjphepojeuknaclrd/Build/Products/Debug-iphonesimulator/AFNetworking -F /Users/ws/Library/Developer/Xcode/DerivedData/LGApp-fosvozugmnvzjphepojeuknaclrd/Build/Products/Debug-iphonesimulator/CocoaLumberjack -F /Users/ws/Library/Developer/Xcode/DerivedData/LGApp-fosvozugmnvzjphepojeuknaclrd/Build/Products/Debug-iphonesimulator/GoogleUtilities -F /Users/ws/Library/Developer/Xcode/DerivedData/LGApp-fosvozugmnvzjphepojeuknaclrd/Build/Products/Debug-iphonesimulator/IGListDiffKit -F /Users/ws/Library/Developer/Xcode/DerivedData/LGApp-fosvozugmnvzjphepojeuknaclrd/Build/Products/Debug-iphonesimulator/IGListKit -F /Users/ws/Library/Developer/Xcode/DerivedData/LGApp-fosvozugmnvzjphepojeuknaclrd/Build/Products/Debug-iphonesimulator/Kingfisher -F /Users/ws/Library/Developer/Xcode/DerivedData/LGApp-fosvozugmnvzjphepojeuknaclrd/Build/Products/Debug-iphonesimulator/MagicalRecord -F /Users/ws/Library/Developer/Xcode/DerivedData/LGApp-fosvozugmnvzjphepojeuknaclrd/Build/Products/Debug-iphonesimulator/PromisesObjC -F /Users/ws/Library/Developer/Xcode/DerivedData/LGApp-fosvozugmnvzjphepojeuknaclrd/Build/Products/Debug-iphonesimulator/Realm -F /Users/ws/Library/Developer/Xcode/DerivedData/LGApp-fosvozugmnvzjphepojeuknaclrd/Build/Products/Debug-iphonesimulator/YYKit -F /Users/ws/Library/Developer/Xcode/DerivedData/LGApp-fosvozugmnvzjphepojeuknaclrd/Build/Products/Debug-iphonesimulator/iOS-Echarts -F /Users/ws/Documents/MyLib/cocoapods-hmap/spec/hmap/Resources/LGApp/Pods/FBAEMKit/XCFrameworks -F /Users/ws/Documents/MyLib/cocoapods-hmap/spec/hmap/Resources/LGApp/Pods/FBSDKCoreKit/XCFrameworks -F /Users/ws/Documents/MyLib/cocoapods-hmap/spec/hmap/Resources/LGApp/Pods/FBSDKCoreKit_Basics/XCFrameworks -F /Users/ws/Documents/MyLib/cocoapods-hmap/spec/hmap/Resources/LGApp/Pods/FBSDKShareKit/XCFrameworks -F /Users/ws/Documents/MyLib/cocoapods-hmap/spec/hmap/Resources/LGApp/Pods/Realm/core -F /Users/ws/Documents/MyLib/cocoapods-hmap/spec/hmap/Resources/LGApp/Pods/YYKit/Vendor -F /Users/ws/Library/Developer/Xcode/DerivedData/LGApp-fosvozugmnvzjphepojeuknaclrd/Build/Products/Debug-iphonesimulator/XCFrameworkIntermediates/FBAEMKit -F /Users/ws/Library/Developer/Xcode/DerivedData/LGApp-fosvozugmnvzjphepojeuknaclrd/Build/Products/Debug-iphonesimulator/XCFrameworkIntermediates/FBSDKCoreKit -F /Users/ws/Library/Developer/Xcode/DerivedData/LGApp-fosvozugmnvzjphepojeuknaclrd/Build/Products/Debug-iphonesimulator/XCFrameworkIntermediates/FBSDKCoreKit_Basics -F /Users/ws/Library/Developer/Xcode/DerivedData/LGApp-fosvozugmnvzjphepojeuknaclrd/Build/Products/Debug-iphonesimulator/XCFrameworkIntermediates/FBSDKShareKit -F /Users/ws/Documents/MyLib/cocoapods-hmap/spec/hmap/Resources/LGApp -enable-testing -g -module-cache-path /Users/ws/Library/Developer/Xcode/DerivedData/ModuleCache.noindex -swift-version 5 -enforce-exclusivity\=checked -Onone -D COCOAPODS -new-driver-path /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/swift-driver -serialize-debugging-options -Xcc -working-directory -Xcc /Users/ws/Documents/MyLib/cocoapods-hmap/spec/hmap/Resources/LGApp -resource-dir /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/lib/swift -enable-anonymous-context-mangled-names -Xcc -I/Users/ws/Library/Developer/Xcode/DerivedData/LGApp-fosvozugmnvzjphepojeuknaclrd/Build/Intermediates.noindex/LGApp.build/Debug-iphonesimulator/LGApp.build/swift-overrides.hmap -Xcc -iquote -Xcc /Users/ws/Library/Developer/Xcode/DerivedData/LGApp-fosvozugmnvzjphepojeuknaclrd/Build/Intermediates.noindex/LGApp.build/Debug-iphonesimulator/LGApp.build/LGApp-generated-files.hmap -Xcc -I/Users/ws/Library/Developer/Xcode/DerivedData/LGApp-fosvozugmnvzjphepojeuknaclrd/Build/Intermediates.noindex/LGApp.build/Debug-iphonesimulator/LGApp.build/LGApp-own-target-headers.hmap -Xcc -I/Users/ws/Library/Developer/Xcode/DerivedData/LGApp-fosvozugmnvzjphepojeuknaclrd/Build/Intermediates.noindex/LGApp.build/Debug-iphonesimulator/LGApp.build/LGApp-all-non-framework-target-headers.hmap -Xcc -ivfsoverlay -Xcc /Users/ws/Library/Developer/Xcode/DerivedData/LGApp-fosvozugmnvzjphepojeuknaclrd/Build/Intermediates.noindex/LGApp.build/Debug-iphonesimulator/LGApp.build/all-product-headers.yaml -Xcc -iquote -Xcc /Users/ws/Library/Developer/Xcode/DerivedData/LGApp-fosvozugmnvzjphepojeuknaclrd/Build/Intermediates.noindex/LGApp.build/Debug-iphonesimulator/LGApp.build/LGApp-project-headers.hmap -Xcc -I/Users/ws/Library/Developer/Xcode/DerivedData/LGApp-fosvozugmnvzjphepojeuknaclrd/Build/Products/Debug-iphonesimulator/include -Xcc -I/Users/ws/Library/Developer/Xcode/DerivedData/LGApp-fosvozugmnvzjphepojeuknaclrd/Build/Products/Debug-iphonesimulator/AFNetworking/AFNetworking.framework/Headers -Xcc -I/Users/ws/Library/Developer/Xcode/DerivedData/LGApp-fosvozugmnvzjphepojeuknaclrd/Build/Products/Debug-iphonesimulator/CocoaLumberjack/CocoaLumberjack.framework/Headers -Xcc -I/Users/ws/Library/Developer/Xcode/DerivedData/LGApp-fosvozugmnvzjphepojeuknaclrd/Build/Products/Debug-iphonesimulator/GoogleUtilities/GoogleUtilities.framework/Headers -Xcc -I/Users/ws/Library/Developer/Xcode/DerivedData/LGApp-fosvozugmnvzjphepojeuknaclrd/Build/Products/Debug-iphonesimulator/IGListDiffKit/IGListDiffKit.framework/Headers -Xcc -I/Users/ws/Library/Developer/Xcode/DerivedData/LGApp-fosvozugmnvzjphepojeuknaclrd/Build/Products/Debug-iphonesimulator/IGListKit/IGListKit.framework/Headers -Xcc -I/Users/ws/Library/Developer/Xcode/DerivedData/LGApp-fosvozugmnvzjphepojeuknaclrd/Build/Products/Debug-iphonesimulator/Kingfisher/Kingfisher.framework/Headers -Xcc -I/Users/ws/Library/Developer/Xcode/DerivedData/LGApp-fosvozugmnvzjphepojeuknaclrd/Build/Products/Debug-iphonesimulator/MagicalRecord/MagicalRecord.framework/Headers -Xcc -I/Users/ws/Library/Developer/Xcode/DerivedData/LGApp-fosvozugmnvzjphepojeuknaclrd/Build/Products/Debug-iphonesimulator/PromisesObjC/FBLPromises.framework/Headers -Xcc -I/Users/ws/Library/Developer/Xcode/DerivedData/LGApp-fosvozugmnvzjphepojeuknaclrd/Build/Products/Debug-iphonesimulator/Realm/Realm.framework/Headers -Xcc -I/Users/ws/Library/Developer/Xcode/DerivedData/LGApp-fosvozugmnvzjphepojeuknaclrd/Build/Products/Debug-iphonesimulator/YYKit/YYKit.framework/Headers -Xcc -I/Users/ws/Library/Developer/Xcode/DerivedData/LGApp-fosvozugmnvzjphepojeuknaclrd/Build/Products/Debug-iphonesimulator/iOS-Echarts/iOS_Echarts.framework/Headers -Xcc -I/Users/ws/Library/Developer/Xcode/DerivedData/LGApp-fosvozugmnvzjphepojeuknaclrd/Build/Products/Debug-iphonesimulator/XCFrameworkIntermediates/Realm/Headers -Xcc -I/Users/ws/Library/Developer/Xcode/DerivedData/LGApp-fosvozugmnvzjphepojeuknaclrd/Build/Intermediates.noindex/LGApp.build/Debug-iphonesimulator/LGApp.build/DerivedSources-normal/x86_64 -Xcc -I/Users/ws/Library/Developer/Xcode/DerivedData/LGApp-fosvozugmnvzjphepojeuknaclrd/Build/Intermediates.noindex/LGApp.build/Debug-iphonesimulator/LGApp.build/DerivedSources/x86_64 -Xcc -I/Users/ws/Library/Developer/Xcode/DerivedData/LGApp-fosvozugmnvzjphepojeuknaclrd/Build/Intermediates.noindex/LGApp.build/Debug-iphonesimulator/LGApp.build/DerivedSources -Xcc -DDEBUG\=1 -Xcc -DCOCOAPODS\=1 -import-objc-header /Users/ws/Documents/MyLib/cocoapods-hmap/spec/hmap/Resources/LGApp/Source/LGApp-Bridging-Header.h -module-name LGApp -target-sdk-version 15.2.0 -index-store-path /Users/ws/Library/Developer/Xcode/DerivedData/LGApp-fosvozugmnvzjphepojeuknaclrd/Index/DataStore -serialize-diagnostics-path /Users/ws/Library/Developer/Xcode/DerivedData/LGApp-fosvozugmnvzjphepojeuknaclrd/Build/Intermediates.noindex/PrecompiledHeaders/LGApp-Bridging-Header-3p93vwvfq3mhk.dia /Users/ws/Documents/MyLib/cocoapods-hmap/spec/hmap/Resources/LGApp/Source/LGApp-Bridging-Header.h -index-store-path /Users/ws/Library/Developer/Xcode/DerivedData/LGApp-fosvozugmnvzjphepojeuknaclrd/Index/DataStore -emit-pch -pch-output-dir /Users/ws/Library/Developer/Xcode/DerivedData/LGApp-fosvozugmnvzjphepojeuknaclrd/Build/Intermediates.noindex/PrecompiledHeaders

 */
