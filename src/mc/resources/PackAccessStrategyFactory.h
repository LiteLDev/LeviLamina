#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

class PackAccessStrategyFactory {
public:
    // prevent constructor by default
    PackAccessStrategyFactory& operator=(PackAccessStrategyFactory const&);
    PackAccessStrategyFactory(PackAccessStrategyFactory const&);
    PackAccessStrategyFactory();

public:
    // NOLINTBEGIN
    MCAPI static std::unique_ptr<class PackAccessStrategy> create(
        class ResourceLocation&                                             location,
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const& keyProvider,
        class PackReport&                                                   report,
        bool                                                                optimizeForSpeedOverMemory
    );

    MCAPI static std::unique_ptr<class PackAccessStrategy>
    createForDirectory(class ResourceLocation const& location, bool canRecurse);

    MCAPI static std::unique_ptr<class PackAccessStrategy> createForEncrypted(
        class ResourceLocation const&                                       location,
        class ContentIdentity const&                                        contentIdentity,
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const& keyProvider,
        bool                                                                canRecurse
    );

    MCAPI static std::unique_ptr<class PackAccessStrategy> createForEncryptedZip(
        class ResourceLocation const&                                       location,
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const& keyProvider
    );

    MCAPI static std::unique_ptr<class PackAccessStrategy>
    createForZip(class ResourceLocation const& location, bool optimizeForSpeedOverMemory);

    // NOLINTEND
};
