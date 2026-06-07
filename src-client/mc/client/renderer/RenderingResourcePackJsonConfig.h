#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class IMinecraftEventing;
class LinkedAssetValidator;
class ResourcePackManager;
namespace Puv { class LoadResultAny; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class RenderingResourcePackJsonConfig : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkeb0d1a;
    ::ll::UntypedStorage<8, 8>  mUnke625f0;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderingResourcePackJsonConfig& operator=(RenderingResourcePackJsonConfig const&);
    RenderingResourcePackJsonConfig(RenderingResourcePackJsonConfig const&);
    RenderingResourcePackJsonConfig();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Puv::LoadResultAny loadFromString(
        ::cereal::ReflectionCtx const&                     ctx,
        ::std::string const&                               atmosphereJson,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    ) = 0;

    virtual void loadDataSync(
        ::cereal::ReflectionCtx const&                     ctx,
        ::ResourcePackManager&                             resourcePackManager,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    ) = 0;

    virtual void _setDefaultIdentifierImpl(::HashedString const& defaultIdentifier) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RenderingResourcePackJsonConfig(::IMinecraftEventing& eventing);

    MCNAPI ::HashedString const& getDefaultIdentifer() const;

    MCNAPI void setDefaultIdentifier(::HashedString const& defaultIdentifier);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IMinecraftEventing& eventing);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
