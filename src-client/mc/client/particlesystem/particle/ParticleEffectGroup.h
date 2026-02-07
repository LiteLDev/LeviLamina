#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/puv/LoadResult.h"
#include "mc/deps/resource_processing/category/CategoryLoader.h"
#include "mc/platform/threading/Mutex.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class IMinecraftEventing;
class LinkedAssetValidator;
class MinEngineVersion;
class PackStats;
class ParticleEffectInfo;
class ResourceLoadManager;
class ResourcePackManager;
namespace ParticleSystem { class ParticleEffect; }
namespace ParticleSystem { class ParticleEffectComponentRegistry; }
namespace ParticleSystem { struct ParticleEffectLoaderTraits; }
namespace SharedTypes::v1_20_80 { struct ParticleEffectData; }
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
    ::ll::TypedStorage<8, 232, ::Bedrock::Resources::CategoryLoader<::ParticleSystem::ParticleEffectLoaderTraits>>
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
    MCAPI bool _createParticleEffectInfo(
        ::HashedString const&                               name,
        ::std::shared_ptr<::ParticleSystem::ParticleEffect> candidateParticle,
        ::std::string const&                                containerName
    );

    MCAPI ::Puv::LoadResult<::SharedTypes::v1_20_80::ParticleEffectData> _loadParticleEffect(
        ::std::string const&                                     fileWithExtension,
        ::std::string const&                                     containerName,
        ::std::string&&                                          fileData,
        ::MinEngineVersion const&                                minEngineVersion,
        ::ParticleSystem::ParticleEffectComponentRegistry const& particleComponentRegistry,
        ::PackStats&                                             stats,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator>       validator
    );

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
