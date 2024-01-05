#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class PackAccessStrategyFactory {
public:
    // prevent constructor by default
    PackAccessStrategyFactory& operator=(PackAccessStrategyFactory const&);
    PackAccessStrategyFactory(PackAccessStrategyFactory const&);
    PackAccessStrategyFactory();

public:
    // NOLINTBEGIN
    // symbol:
    // ?create@PackAccessStrategyFactory@@SA?AV?$unique_ptr@VPackAccessStrategy@@U?$default_delete@VPackAccessStrategy@@@std@@@std@@AEAVResourceLocation@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@AEAVPackReport@@_N@Z
    MCAPI static std::unique_ptr<class PackAccessStrategy> create(
        class ResourceLocation&                                             location,
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const& keyProvider,
        class PackReport&                                                   report,
        bool                                                                optimizeForSpeedOverMemory
    );

    // symbol:
    // ?createForDirectory@PackAccessStrategyFactory@@SA?AV?$unique_ptr@VPackAccessStrategy@@U?$default_delete@VPackAccessStrategy@@@std@@@std@@AEBVResourceLocation@@_N@Z
    MCAPI static std::unique_ptr<class PackAccessStrategy>
    createForDirectory(class ResourceLocation const& location, bool canRecurse);

    // symbol:
    // ?createForEncrypted@PackAccessStrategyFactory@@SA?AV?$unique_ptr@VPackAccessStrategy@@U?$default_delete@VPackAccessStrategy@@@std@@@std@@AEBVResourceLocation@@AEBVContentIdentity@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@_N@Z
    MCAPI static std::unique_ptr<class PackAccessStrategy> createForEncrypted(
        class ResourceLocation const&                                       location,
        class ContentIdentity const&                                        contentIdentity,
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const& keyProvider,
        bool                                                                canRecurse
    );

    // symbol:
    // ?createForEncryptedZip@PackAccessStrategyFactory@@SA?AV?$unique_ptr@VPackAccessStrategy@@U?$default_delete@VPackAccessStrategy@@@std@@@std@@AEBVResourceLocation@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@@Z
    MCAPI static std::unique_ptr<class PackAccessStrategy> createForEncryptedZip(
        class ResourceLocation const&                                       location,
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const& keyProvider
    );

    // symbol:
    // ?createForZip@PackAccessStrategyFactory@@SA?AV?$unique_ptr@VPackAccessStrategy@@U?$default_delete@VPackAccessStrategy@@@std@@@std@@AEBVResourceLocation@@_N@Z
    MCAPI static std::unique_ptr<class PackAccessStrategy>
    createForZip(class ResourceLocation const& location, bool optimizeForSpeedOverMemory);

    // NOLINTEND
};
