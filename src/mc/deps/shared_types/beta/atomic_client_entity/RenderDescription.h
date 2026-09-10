#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/beta/atomic_client_entity/ScriptDescription.h"

namespace SharedTypes::Beta::AtomicClientEntity {

struct RenderDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::std::string>>                   mMaterials;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::std::string>>                   mTextures;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::std::string>>                   mGeometry;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::std::string>>                   mAnimations;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::std::string>>                   mParticleEffects;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::std::string>>                   mSoundEffects;
    ::ll::TypedStorage<8, 72, ::SharedTypes::Beta::AtomicClientEntity::ScriptDescription> mScripts;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                               mRenderControllers;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    RenderDescription& operator=(RenderDescription const&);
    RenderDescription();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI RenderDescription(::SharedTypes::Beta::AtomicClientEntity::RenderDescription const&);

    MCAPI ::SharedTypes::Beta::AtomicClientEntity::RenderDescription&
    operator=(::SharedTypes::Beta::AtomicClientEntity::RenderDescription&&);

    MCAPI ~RenderDescription();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::SharedTypes::Beta::AtomicClientEntity::RenderDescription const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace SharedTypes::Beta::AtomicClientEntity
