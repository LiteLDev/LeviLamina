#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/beta/atomic_client_entity/ScriptDescription.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Beta::AtomicClientEntity { struct RenderDescription; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::Beta::AtomicClientEntity {

struct AtomicClientEntityDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                              mIdentifier;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::std::string>>                   mMaterials;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::std::string>>                   mTextures;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::std::string>>                   mGeometry;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::std::string>>                   mAnimations;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::std::string>>                   mParticleEffects;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::std::string>>                   mSoundEffects;
    ::ll::TypedStorage<8, 72, ::SharedTypes::Beta::AtomicClientEntity::ScriptDescription> mScripts;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                               mRenderControllers;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AtomicClientEntityDescription();

    MCAPI AtomicClientEntityDescription(::SharedTypes::Beta::AtomicClientEntity::AtomicClientEntityDescription const&);

#ifdef LL_PLAT_C
    MCAPI ::SharedTypes::Beta::AtomicClientEntity::RenderDescription getRenderDescription() const;
#endif

    MCAPI ::SharedTypes::Beta::AtomicClientEntity::AtomicClientEntityDescription&
    operator=(::SharedTypes::Beta::AtomicClientEntity::AtomicClientEntityDescription&&);

    MCAPI ::SharedTypes::Beta::AtomicClientEntity::AtomicClientEntityDescription&
    operator=(::SharedTypes::Beta::AtomicClientEntity::AtomicClientEntityDescription const&);

    MCAPI bool operator==(::SharedTypes::Beta::AtomicClientEntity::AtomicClientEntityDescription const&) const;

    MCAPI ~AtomicClientEntityDescription();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::SharedTypes::Beta::AtomicClientEntity::AtomicClientEntityDescription const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Beta::AtomicClientEntity
