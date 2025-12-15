#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class HashedString;
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
        ::cereal::ReflectionCtx const&,
        ::std::string const&,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator>
    ) = 0;

    virtual void loadDataSync(
        ::cereal::ReflectionCtx const&,
        ::ResourcePackManager&,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator>
    ) = 0;

    virtual void _setDefaultIdentifierImpl(::HashedString const&) = 0;

    virtual ~RenderingResourcePackJsonConfig() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
