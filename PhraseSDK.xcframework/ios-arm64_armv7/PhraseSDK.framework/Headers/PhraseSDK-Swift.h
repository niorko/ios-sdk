#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.3.2 (swiftlang-1200.0.45 clang-1200.0.32.28)
#ifndef PHRASESDK_SWIFT_H
#define PHRASESDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="PhraseSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


/// The Phrase Over the Air (OTA) SDK class. Please use the <code>Phrase.shared</code> instance as your entry point.
/// note:
///
/// Head over to the <a href="https://help.phrase.com/help/phrase-over-the-air-introduction">Phrase Help Center</a>
/// to learn more about the Phrase Over the Air (OTA) SDK and how to use it in your apps.
SWIFT_CLASS("_TtC9PhraseSDK6Phrase")
@interface Phrase : NSObject
/// The provided override for current locale.
/// Can be set either by <code>PhraseApp.shared.setup()</code> or by using this property.
/// Must be set before calling <code>PhraseApp.shared.updateTranslations()</code>.
@property (nonatomic, copy) NSString * _Nullable localeOverride;
/// The provided override for the App version used to return a release which matches
/// the release constraints for the min and max version. Must be semantic.
/// Can be set either by <code>PhraseApp.shared.setup()</code> or by using this property.
/// Must be set before calling <code>PhraseApp.shared.updateTranslations()</code>.
@property (nonatomic, copy) NSString * _Nullable appVersionOverride;
/// Hidden initialization method for shared instance.
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// The shared instance of the Phrase Over the Air (OTA) SDK class. Please use this as your entry point.
/// note:
///
/// Head over to the <a href="https://help.phrase.com/help/phrase-over-the-air-introduction">Phrase Help Center</a>
/// to learn more about the Phrase Over the Air (OTA) SDK and how to use it in your apps.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) Phrase * _Nonnull shared;)
+ (Phrase * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
/// Enables the debug mode of the Phrase Over the Air (OTA) SDK when set to <code>true</code>.
/// note:
///
/// Head over to the <a href="https://help.phrase.com/help/phrase-over-the-air-introduction">Phrase Help Center</a>
/// to learn more about the Phrase Over the Air (OTA) SDK and how to use it in your apps.
@property (nonatomic) BOOL debugMode;
/// Returns the version of the Phrase Over the Air (OTA) SDK.
/// note:
///
/// Head over to the <a href="https://help.phrase.com/help/phrase-over-the-air-introduction">Phrase Help Center</a>
/// to learn more about the Phrase Over the Air (OTA) SDK and how to use it in your apps.
@property (nonatomic, readonly, copy) NSString * _Nonnull sdkVersion;
/// Method to setup the Phrase SDK. Please use this to configure the SDK before using it.
/// After setup simply call <code>PhraseApp.shared.updateTranslations()</code> to update
/// your localization files. We recommend to invoke both functions within your <code>AppDelegate</code>
/// in the <code>application(_:didFinishLaunchingWithOptions:)</code> method.
/// note:
///
/// Head over to the <a href="https://help.phrase.com/help/phrase-over-the-air-introduction">Phrase Help Center</a>
/// to learn more about the Phrase Over the Air (OTA) SDK and how to use it in your apps.
/// \param distributionID Your distribution ID.
///
/// \param environmentSecret Your environment secret.
/// Use your development or production secret depending on your type of release.
///
/// \param timeout The timeout. Defaults to 10 seconds (in Swift).
///
/// \param localeOverride Set to override locale detection. E.g. <code>en</code>.
///
/// \param appVersionOverride Set to override the App Version used to find matching translations. Must be semantic.
///
- (void)setupWithDistributionID:(NSString * _Nonnull)distributionID environmentSecret:(NSString * _Nonnull)environmentSecret timeout:(double)timeout localeOverride:(NSString * _Nullable)localeOverride appVersionOverride:(NSString * _Nullable)appVersionOverride;
@end


@interface Phrase (SWIFT_EXTENSION(PhraseSDK))
- (void)updateTranslationsWithCompletionHandler:(void (^ _Nullable)(BOOL, NSError * _Nullable))completionHandler;
@end



@interface Phrase (SWIFT_EXTENSION(PhraseSDK))
/// Returns a localized version of the string designated by the specified key and residing in the specified table.
/// It tries to use the translation received from the Phrase Over the Air (OTA) SDK.
/// If no translation is found, the default implementation is used as fallback.
/// note:
///
/// Head over to the <a href="https://help.phrase.com/help/phrase-over-the-air-introduction">Phrase Help Center</a>
/// to learn more about the Phrase Over the Air (OTA) SDK and how to use it in your apps.
/// \param key The <code>key</code> for a string in the table identified by <code>tableName</code>.
///
/// \param value The value to return if <code>key</code> is <code>nil</code> or if a localized string for
/// <code>key</code> can’t be found in the <code>table</code>.
///
/// \param tableName The receiver’s string <code>table</code> to search. If <code>tableName</code> is
/// <code>nil</code> or is an empty string, the method attempts to use the table in <code>Localizable.strings</code>.
///
///
/// returns:
///
/// A localized version of the string designated by <code>key</code> in table <code>tableName</code>.
/// This method returns the following when <code>key</code> is <code>nil</code> or not found in <code>table</code>:
/// <ul>
///   <li>
///     If <code>key</code> is <code>nil</code> and value is <code>nil</code>, returns an empty string.
///   </li>
///   <li>
///     If <code>key</code> is <code>nil</code> and value is non-<code>nil</code>, returns <code>value</code>.
///   </li>
///   <li>
///     If <code>key</code> is not found and value is <code>nil</code> or an empty string, returns <code>key</code>.
///   </li>
///   <li>
///     If <code>key</code> is not found and value is non-<code>nil</code> and not empty, return <code>value</code>.
///   </li>
/// </ul>
- (NSString * _Nonnull)localizedStringForKey:(NSString * _Nonnull)key value:(NSString * _Nullable)value table:(NSString * _Nullable)tableName SWIFT_WARN_UNUSED_RESULT;
@end








@interface Phrase (SWIFT_EXTENSION(PhraseSDK))
/// Method to setup the Phrase SDK. Please use this to configure the SDK before using it.
/// After setup simply call <code>PhraseApp.shared.updateTranslations()</code> to update
/// your localization files. We recommend to invoke both functions within your <code>AppDelegate</code>
/// in the <code>application(_:didFinishLaunchingWithOptions:)</code> method.
/// note:
///
/// Head over to the <a href="https://help.phrase.com/help/phrase-over-the-air-introduction">Phrase Help Center</a>
/// to learn more about the Phrase Over the Air (OTA) SDK and how to use it in your apps.
/// \param distributionID Your distribution ID.
///
/// \param environmentSecret Your environment secret.
/// Use your development or production secret depending on your type of release.
///
- (void)setupWithDistributionID:(NSString * _Nonnull)distributionID environmentSecret:(NSString * _Nonnull)environmentSecret;
/// Method to setup the Phrase SDK. Please use this to configure the SDK before using it.
/// After setup simply call <code>PhraseApp.shared.updateTranslations()</code> to update
/// your localization files. We recommend to invoke both functions within your <code>AppDelegate</code>
/// in the <code>application(_:didFinishLaunchingWithOptions:)</code> method.
/// note:
///
/// Head over to the <a href="https://help.phrase.com/help/phrase-over-the-air-introduction">Phrase Help Center</a>
/// to learn more about the Phrase Over the Air (OTA) SDK and how to use it in your apps.
/// \param distributionID Your distribution ID.
///
/// \param environmentSecret Your environment secret.
/// Use your development or production secret depending on your type of release.
///
/// \param localeOverride Set to override locale detection. E.g. <code>en</code>.
///
- (void)setupWithDistributionID:(NSString * _Nonnull)distributionID environmentSecret:(NSString * _Nonnull)environmentSecret localeOverride:(NSString * _Nonnull)localeOverride;
/// Method to setup the Phrase SDK. Please use this to configure the SDK before using it.
/// After setup simply call <code>PhraseApp.shared.updateTranslations()</code> to update
/// your localization files. We recommend to invoke both functions within your <code>AppDelegate</code>
/// in the <code>application(_:didFinishLaunchingWithOptions:)</code> method.
/// note:
///
/// Head over to the <a href="https://help.phrase.com/help/phrase-over-the-air-introduction">Phrase Help Center</a>
/// to learn more about the Phrase Over the Air (OTA) SDK and how to use it in your apps.
/// \param distributionID Your distribution ID.
///
/// \param environmentSecret Your environment secret.
/// Use your development or production secret depending on your type of release.
///
/// \param timeout The timeout in seconds.
///
- (void)setupWithDistributionID:(NSString * _Nonnull)distributionID environmentSecret:(NSString * _Nonnull)environmentSecret timeout:(double)timeout;
/// Method to setup the Phrase SDK. Please use this to configure the SDK before using it.
/// After setup simply call <code>PhraseApp.shared.updateTranslations()</code> to update
/// your localization files. We recommend to invoke both functions within your <code>AppDelegate</code>
/// in the <code>application(_:didFinishLaunchingWithOptions:)</code> method.
/// note:
///
/// Head over to the <a href="https://help.phrase.com/help/phrase-over-the-air-introduction">Phrase Help Center</a>
/// to learn more about the Phrase Over the Air (OTA) SDK and how to use it in your apps.
/// \param distributionID Your distribution ID.
///
/// \param environmentSecret Your environment secret.
/// Use your development or production secret depending on your type of release.
///
/// \param appVersionOverride Set to override the App Version used to find matching translations. Must be semantic.
///
- (void)setupWithDistributionID:(NSString * _Nonnull)distributionID environmentSecret:(NSString * _Nonnull)environmentSecret appVersionOverride:(NSString * _Nonnull)appVersionOverride;
@end


/// <code>PhraseBundle</code> is the bundle class replacing the user’s <code>Bundle.main</code> when the bundle proxy is enabled.
/// If no translations are found, translations from original main bundle are used as a fallback.
SWIFT_CLASS("_TtC9PhraseSDK12PhraseBundle")
@interface PhraseBundle : NSBundle
- (NSString * _Nonnull)localizedStringForKey:(NSString * _Nonnull)key value:(NSString * _Nullable)value table:(NSString * _Nullable)tableName SWIFT_WARN_UNUSED_RESULT;
- (nullable instancetype)initWithPath:(NSString * _Nonnull)path OBJC_DESIGNATED_INITIALIZER;
@end


/// An operation class which handles async operations.
SWIFT_CLASS("_TtC9PhraseSDK22PhraseNetworkOperation")
@interface PhraseNetworkOperation : NSOperation
/// Let iOS know we intend to run asynchronously.
@property (nonatomic, readonly, getter=isAsynchronous) BOOL asynchronous;
/// Overriden isExecuting. Must be thread-safe!
@property (nonatomic, readonly, getter=isExecuting) BOOL executing;
/// Overriden isFinished. Must be thread-safe!
@property (nonatomic, readonly, getter=isFinished) BOOL finished;
/// The start method.
- (void)start;
/// The main execution block which executes the download task.
- (void)main;
/// The cancel method which also cancels the download task.
- (void)cancel;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#elif defined(__ARM_ARCH_7A__) && __ARM_ARCH_7A__
// Generated by Apple Swift version 5.3.2 (swiftlang-1200.0.45 clang-1200.0.32.28)
#ifndef PHRASESDK_SWIFT_H
#define PHRASESDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="PhraseSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


/// The Phrase Over the Air (OTA) SDK class. Please use the <code>Phrase.shared</code> instance as your entry point.
/// note:
///
/// Head over to the <a href="https://help.phrase.com/help/phrase-over-the-air-introduction">Phrase Help Center</a>
/// to learn more about the Phrase Over the Air (OTA) SDK and how to use it in your apps.
SWIFT_CLASS("_TtC9PhraseSDK6Phrase")
@interface Phrase : NSObject
/// The provided override for current locale.
/// Can be set either by <code>PhraseApp.shared.setup()</code> or by using this property.
/// Must be set before calling <code>PhraseApp.shared.updateTranslations()</code>.
@property (nonatomic, copy) NSString * _Nullable localeOverride;
/// The provided override for the App version used to return a release which matches
/// the release constraints for the min and max version. Must be semantic.
/// Can be set either by <code>PhraseApp.shared.setup()</code> or by using this property.
/// Must be set before calling <code>PhraseApp.shared.updateTranslations()</code>.
@property (nonatomic, copy) NSString * _Nullable appVersionOverride;
/// Hidden initialization method for shared instance.
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// The shared instance of the Phrase Over the Air (OTA) SDK class. Please use this as your entry point.
/// note:
///
/// Head over to the <a href="https://help.phrase.com/help/phrase-over-the-air-introduction">Phrase Help Center</a>
/// to learn more about the Phrase Over the Air (OTA) SDK and how to use it in your apps.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) Phrase * _Nonnull shared;)
+ (Phrase * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
/// Enables the debug mode of the Phrase Over the Air (OTA) SDK when set to <code>true</code>.
/// note:
///
/// Head over to the <a href="https://help.phrase.com/help/phrase-over-the-air-introduction">Phrase Help Center</a>
/// to learn more about the Phrase Over the Air (OTA) SDK and how to use it in your apps.
@property (nonatomic) BOOL debugMode;
/// Returns the version of the Phrase Over the Air (OTA) SDK.
/// note:
///
/// Head over to the <a href="https://help.phrase.com/help/phrase-over-the-air-introduction">Phrase Help Center</a>
/// to learn more about the Phrase Over the Air (OTA) SDK and how to use it in your apps.
@property (nonatomic, readonly, copy) NSString * _Nonnull sdkVersion;
/// Method to setup the Phrase SDK. Please use this to configure the SDK before using it.
/// After setup simply call <code>PhraseApp.shared.updateTranslations()</code> to update
/// your localization files. We recommend to invoke both functions within your <code>AppDelegate</code>
/// in the <code>application(_:didFinishLaunchingWithOptions:)</code> method.
/// note:
///
/// Head over to the <a href="https://help.phrase.com/help/phrase-over-the-air-introduction">Phrase Help Center</a>
/// to learn more about the Phrase Over the Air (OTA) SDK and how to use it in your apps.
/// \param distributionID Your distribution ID.
///
/// \param environmentSecret Your environment secret.
/// Use your development or production secret depending on your type of release.
///
/// \param timeout The timeout. Defaults to 10 seconds (in Swift).
///
/// \param localeOverride Set to override locale detection. E.g. <code>en</code>.
///
/// \param appVersionOverride Set to override the App Version used to find matching translations. Must be semantic.
///
- (void)setupWithDistributionID:(NSString * _Nonnull)distributionID environmentSecret:(NSString * _Nonnull)environmentSecret timeout:(double)timeout localeOverride:(NSString * _Nullable)localeOverride appVersionOverride:(NSString * _Nullable)appVersionOverride;
@end


@interface Phrase (SWIFT_EXTENSION(PhraseSDK))
- (void)updateTranslationsWithCompletionHandler:(void (^ _Nullable)(BOOL, NSError * _Nullable))completionHandler;
@end



@interface Phrase (SWIFT_EXTENSION(PhraseSDK))
/// Returns a localized version of the string designated by the specified key and residing in the specified table.
/// It tries to use the translation received from the Phrase Over the Air (OTA) SDK.
/// If no translation is found, the default implementation is used as fallback.
/// note:
///
/// Head over to the <a href="https://help.phrase.com/help/phrase-over-the-air-introduction">Phrase Help Center</a>
/// to learn more about the Phrase Over the Air (OTA) SDK and how to use it in your apps.
/// \param key The <code>key</code> for a string in the table identified by <code>tableName</code>.
///
/// \param value The value to return if <code>key</code> is <code>nil</code> or if a localized string for
/// <code>key</code> can’t be found in the <code>table</code>.
///
/// \param tableName The receiver’s string <code>table</code> to search. If <code>tableName</code> is
/// <code>nil</code> or is an empty string, the method attempts to use the table in <code>Localizable.strings</code>.
///
///
/// returns:
///
/// A localized version of the string designated by <code>key</code> in table <code>tableName</code>.
/// This method returns the following when <code>key</code> is <code>nil</code> or not found in <code>table</code>:
/// <ul>
///   <li>
///     If <code>key</code> is <code>nil</code> and value is <code>nil</code>, returns an empty string.
///   </li>
///   <li>
///     If <code>key</code> is <code>nil</code> and value is non-<code>nil</code>, returns <code>value</code>.
///   </li>
///   <li>
///     If <code>key</code> is not found and value is <code>nil</code> or an empty string, returns <code>key</code>.
///   </li>
///   <li>
///     If <code>key</code> is not found and value is non-<code>nil</code> and not empty, return <code>value</code>.
///   </li>
/// </ul>
- (NSString * _Nonnull)localizedStringForKey:(NSString * _Nonnull)key value:(NSString * _Nullable)value table:(NSString * _Nullable)tableName SWIFT_WARN_UNUSED_RESULT;
@end








@interface Phrase (SWIFT_EXTENSION(PhraseSDK))
/// Method to setup the Phrase SDK. Please use this to configure the SDK before using it.
/// After setup simply call <code>PhraseApp.shared.updateTranslations()</code> to update
/// your localization files. We recommend to invoke both functions within your <code>AppDelegate</code>
/// in the <code>application(_:didFinishLaunchingWithOptions:)</code> method.
/// note:
///
/// Head over to the <a href="https://help.phrase.com/help/phrase-over-the-air-introduction">Phrase Help Center</a>
/// to learn more about the Phrase Over the Air (OTA) SDK and how to use it in your apps.
/// \param distributionID Your distribution ID.
///
/// \param environmentSecret Your environment secret.
/// Use your development or production secret depending on your type of release.
///
- (void)setupWithDistributionID:(NSString * _Nonnull)distributionID environmentSecret:(NSString * _Nonnull)environmentSecret;
/// Method to setup the Phrase SDK. Please use this to configure the SDK before using it.
/// After setup simply call <code>PhraseApp.shared.updateTranslations()</code> to update
/// your localization files. We recommend to invoke both functions within your <code>AppDelegate</code>
/// in the <code>application(_:didFinishLaunchingWithOptions:)</code> method.
/// note:
///
/// Head over to the <a href="https://help.phrase.com/help/phrase-over-the-air-introduction">Phrase Help Center</a>
/// to learn more about the Phrase Over the Air (OTA) SDK and how to use it in your apps.
/// \param distributionID Your distribution ID.
///
/// \param environmentSecret Your environment secret.
/// Use your development or production secret depending on your type of release.
///
/// \param localeOverride Set to override locale detection. E.g. <code>en</code>.
///
- (void)setupWithDistributionID:(NSString * _Nonnull)distributionID environmentSecret:(NSString * _Nonnull)environmentSecret localeOverride:(NSString * _Nonnull)localeOverride;
/// Method to setup the Phrase SDK. Please use this to configure the SDK before using it.
/// After setup simply call <code>PhraseApp.shared.updateTranslations()</code> to update
/// your localization files. We recommend to invoke both functions within your <code>AppDelegate</code>
/// in the <code>application(_:didFinishLaunchingWithOptions:)</code> method.
/// note:
///
/// Head over to the <a href="https://help.phrase.com/help/phrase-over-the-air-introduction">Phrase Help Center</a>
/// to learn more about the Phrase Over the Air (OTA) SDK and how to use it in your apps.
/// \param distributionID Your distribution ID.
///
/// \param environmentSecret Your environment secret.
/// Use your development or production secret depending on your type of release.
///
/// \param timeout The timeout in seconds.
///
- (void)setupWithDistributionID:(NSString * _Nonnull)distributionID environmentSecret:(NSString * _Nonnull)environmentSecret timeout:(double)timeout;
/// Method to setup the Phrase SDK. Please use this to configure the SDK before using it.
/// After setup simply call <code>PhraseApp.shared.updateTranslations()</code> to update
/// your localization files. We recommend to invoke both functions within your <code>AppDelegate</code>
/// in the <code>application(_:didFinishLaunchingWithOptions:)</code> method.
/// note:
///
/// Head over to the <a href="https://help.phrase.com/help/phrase-over-the-air-introduction">Phrase Help Center</a>
/// to learn more about the Phrase Over the Air (OTA) SDK and how to use it in your apps.
/// \param distributionID Your distribution ID.
///
/// \param environmentSecret Your environment secret.
/// Use your development or production secret depending on your type of release.
///
/// \param appVersionOverride Set to override the App Version used to find matching translations. Must be semantic.
///
- (void)setupWithDistributionID:(NSString * _Nonnull)distributionID environmentSecret:(NSString * _Nonnull)environmentSecret appVersionOverride:(NSString * _Nonnull)appVersionOverride;
@end


/// <code>PhraseBundle</code> is the bundle class replacing the user’s <code>Bundle.main</code> when the bundle proxy is enabled.
/// If no translations are found, translations from original main bundle are used as a fallback.
SWIFT_CLASS("_TtC9PhraseSDK12PhraseBundle")
@interface PhraseBundle : NSBundle
- (NSString * _Nonnull)localizedStringForKey:(NSString * _Nonnull)key value:(NSString * _Nullable)value table:(NSString * _Nullable)tableName SWIFT_WARN_UNUSED_RESULT;
- (nullable instancetype)initWithPath:(NSString * _Nonnull)path OBJC_DESIGNATED_INITIALIZER;
@end


/// An operation class which handles async operations.
SWIFT_CLASS("_TtC9PhraseSDK22PhraseNetworkOperation")
@interface PhraseNetworkOperation : NSOperation
/// Let iOS know we intend to run asynchronously.
@property (nonatomic, readonly, getter=isAsynchronous) BOOL asynchronous;
/// Overriden isExecuting. Must be thread-safe!
@property (nonatomic, readonly, getter=isExecuting) BOOL executing;
/// Overriden isFinished. Must be thread-safe!
@property (nonatomic, readonly, getter=isFinished) BOOL finished;
/// The start method.
- (void)start;
/// The main execution block which executes the download task.
- (void)main;
/// The cancel method which also cancels the download task.
- (void)cancel;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#endif
