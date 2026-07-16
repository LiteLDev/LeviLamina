#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/resource_processing/category/CategoryLoader.h"
#include "mc/platform/threading/Mutex.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class LinkedAssetValidator;
class ParticleEffectInfo;
class ResourceLoadManager;
class ResourcePackManager;
namespace ParticleSystem { class ParticleEffectComponentRegistry; }
namespace ParticleSystem { struct ParticleEffectLoaderTraits; }
// clang-format on

class ParticleEffectGroup {
public:
    // ParticleEffectGroup inner types define
    using PuvLoader = ::Bedrock::Resources::CategoryLoader<::ParticleSystem::ParticleEffectLoaderTraits>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::std::shared_ptr<::ParticleEffectInfo>>>
                                                           mParticleEffectInfos;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex> mParticleEffectInfoLock;
    ::ll::TypedStorage<8, 264, ::Bedrock::Resources::CategoryLoader<::ParticleSystem::ParticleEffectLoaderTraits>>
                                                    mLoader;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&> mEventing;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleEffectGroup& operator=(ParticleEffectGroup const&);
    ParticleEffectGroup(ParticleEffectGroup const&);
    ParticleEffectGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::ParticleEffectInfo> getParticleEffectInfo(::HashedString const& name);

    MCAPI void loadParticleEffects(
        ::ResourcePackManager&                                   resourcePackManager,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager>     resourceLoadManager,
        ::ParticleSystem::ParticleEffectComponentRegistry const& particleComponentRegistry,
        ::LinkedAssetValidator&                                  validator
    );

    MCAPI void unloadParticleEffects();
    // NOLINTEND
};
