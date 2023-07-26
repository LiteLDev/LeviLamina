#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class PackAccessStrategyFactory {

public:
    // prevent constructor by default
    PackAccessStrategyFactory& operator=(PackAccessStrategyFactory const&) = delete;
    PackAccessStrategyFactory(PackAccessStrategyFactory const&)            = delete;
    PackAccessStrategyFactory()                                            = delete;

public:
    /**
     * @symbol
     * ?create\@PackAccessStrategyFactory\@\@SA?AV?$unique_ptr\@VPackAccessStrategy\@\@U?$default_delete\@VPackAccessStrategy\@\@\@std\@\@\@std\@\@AEAVResourceLocation\@\@AEBV?$not_null\@V?$NonOwnerPointer\@$$CBVIContentKeyProvider\@\@\@Bedrock\@\@\@gsl\@\@AEAVPackReport\@\@_N\@Z
     */
    MCAPI static std::unique_ptr<class PackAccessStrategy> create(
        class ResourceLocation&,
        class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const&,
        class PackReport&,
        bool
    ); // NOLINT
    /**
     * @symbol
     * ?createForDirectory\@PackAccessStrategyFactory\@\@SA?AV?$unique_ptr\@VPackAccessStrategy\@\@U?$default_delete\@VPackAccessStrategy\@\@\@std\@\@\@std\@\@AEBVResourceLocation\@\@_N\@Z
     */
    MCAPI static std::unique_ptr<class PackAccessStrategy>
    createForDirectory(class ResourceLocation const&, bool); // NOLINT
    /**
     * @symbol
     * ?createForEncrypted\@PackAccessStrategyFactory\@\@SA?AV?$unique_ptr\@VPackAccessStrategy\@\@U?$default_delete\@VPackAccessStrategy\@\@\@std\@\@\@std\@\@AEBVResourceLocation\@\@AEBVContentIdentity\@\@AEBV?$not_null\@V?$NonOwnerPointer\@$$CBVIContentKeyProvider\@\@\@Bedrock\@\@\@gsl\@\@_N\@Z
     */
    MCAPI static std::unique_ptr<class PackAccessStrategy> createForEncrypted(
        class ResourceLocation const&,
        class ContentIdentity const&,
        class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const&,
        bool
    ); // NOLINT
    /**
     * @symbol
     * ?createForEncryptedZip\@PackAccessStrategyFactory\@\@SA?AV?$unique_ptr\@VPackAccessStrategy\@\@U?$default_delete\@VPackAccessStrategy\@\@\@std\@\@\@std\@\@AEBVResourceLocation\@\@AEBV?$not_null\@V?$NonOwnerPointer\@$$CBVIContentKeyProvider\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCAPI static std::unique_ptr<class PackAccessStrategy>
    createForEncryptedZip(class ResourceLocation const&, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const&); // NOLINT
    /**
     * @symbol
     * ?createForZip\@PackAccessStrategyFactory\@\@SA?AV?$unique_ptr\@VPackAccessStrategy\@\@U?$default_delete\@VPackAccessStrategy\@\@\@std\@\@\@std\@\@AEBVResourceLocation\@\@_N\@Z
     */
    MCAPI static std::unique_ptr<class PackAccessStrategy> createForZip(class ResourceLocation const&, bool); // NOLINT
};
