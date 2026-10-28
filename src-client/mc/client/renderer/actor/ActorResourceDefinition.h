#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/HeldItemInfo.h"
#include "mc/client/renderer/actor/SpawnEggInfo.h"
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/minecraft_renderer/resources/MERSTextureMode.h"
#include "mc/deps/minecraft_renderer/resources/NormalTextureMode.h"
#include "mc/world/actor/animation/CommonResourceDefinitionMap.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationControllerGroup;
class ActorAnimationGroup;
class ExpressionNode;
class GeometryGroup;
class GeometryPtr;
class MaterialVariants;
class RenderControllerPtr;
class ResourceLocation;
struct ActorTextureInfo;
struct PBRTexturePtrs;
namespace mce { class MaterialPtr; }
namespace mce { class TexturePtr; }
// clang-format on

class ActorResourceDefinition : public ::CommonResourceDefinitionMap {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const>                                               mIsAttachable;
    ::ll::TypedStorage<1, 1, bool>                                                     mIsOverriden;
    ::ll::TypedStorage<8, 48, ::HashedString>                                          mName;
    ::ll::TypedStorage<8, 24, ::SemVersion const>                                      mFullStackMinEngineVersion;
    ::ll::TypedStorage<8, 24, ::SemVersion const>                                      mActorJsonMinEngineVersion;
    ::ll::TypedStorage<8, 48, ::HashedString>                                          mQueryableGeometryName;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::GeometryPtr>>      mGeometryMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::ActorTextureInfo>> mTextureMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::MaterialVariants>> mMaterialVariantMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::HashedString>>    mActorParticleEffectMap;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::RenderControllerPtr, ::ExpressionNode>>>
                                                                                      mRenderControllerPtrArray;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::ExpressionNode>> mActorScripts;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::std::string>>    mSoundEffectMap;
    ::ll::TypedStorage<8, 24, ::HeldItemInfo>                                         mHeldItemInfo;
    ::ll::TypedStorage<1, 1, bool>                                                    mEnableAttachables;
    ::ll::TypedStorage<1, 1, bool>                                                    mHideArmor;
    ::ll::TypedStorage<8, 88, ::SpawnEggInfo>                                         mSpawnEgg;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorResourceDefinition& operator=(ActorResourceDefinition const&);
    ActorResourceDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorResourceDefinition(::ActorResourceDefinition const& rhs);

    MCAPI ActorResourceDefinition(
        ::HashedString      name,
        bool                isAttachable,
        ::SemVersion const& fullStackMinEngineVersion,
        ::SemVersion const& actorJsonMinEngineVersion
    );

    MCAPI ::ActorTextureInfo const getActorTextureInfo(::std::string_view name, bool returnFirstIfNotFound) const;

    MCAPI ::PBRTexturePtrs const getActorTexturePtrs(::std::string const& name, bool returnFirstIfNotFound) const;

    MCAPI ::mce::TexturePtr const getColorTexture(::std::string const& name, bool returnFirstIfNotFound) const;

    MCAPI ::ResourceLocation const
    getColorTextureResourceLocation(::std::string const& name, bool returnFirstIfNotFound) const;

    MCAPI ::GeometryPtr const getGeometry(::std::string_view name, bool returnFirstIfNotFound) const;

    MCAPI ::MaterialVariants const& getMaterialVariants(::std::string const& name) const;

    MCAPI void mergeGeometry(::std::string const& name, ::GeometryPtr geometryPtr);

    MCAPI void mergeHeldItemScale(::ExpressionNode heldItemScale);

    MCAPI void mergeMaterial(
        ::std::string const& name,
        ::mce::MaterialPtr   skinningMaterialPtr,
        ::mce::MaterialPtr   skinningColorMaterialPtr
    );

    MCAPI void mergeParticleEffects(::std::unordered_map<::HashedString, ::HashedString> actorParticleEffects);

    MCAPI void
    mergeRenderControllers(::std::vector<::std::pair<::RenderControllerPtr, ::ExpressionNode>> renderControllerPtrs);

    MCAPI void mergeScript(::std::string name, ::ExpressionNode expression);

    MCAPI void mergeSoundEffects(::std::string name, ::std::string soundEffectName);

    MCAPI void mergeTexture(::std::string const& name, ::ActorTextureInfo const& inInfo);

    MCAPI void mergeTexture(
        ::std::string const&                name,
        ::ResourceLocation const&           colorResourceLocation,
        ::mce::TexturePtr                   colorTexture,
        ::std::optional<::ResourceLocation> mersResourceLocation,
        ::mce::TexturePtr                   mersTexture,
        ::MERSTextureMode                   mersTextureMode,
        ::std::optional<::ResourceLocation> normalResourceLocation,
        ::mce::TexturePtr                   normalTexture,
        ::NormalTextureMode                 normalTextureMode
    );

    MCAPI void patch(
        ::std::shared_ptr<::GeometryGroup>                 geometryGroup,
        ::std::shared_ptr<::ActorAnimationGroup>           animationGroup,
        ::std::shared_ptr<::ActorAnimationControllerGroup> animationControllerGroup,
        ::std::string const&                               jsonPatchInfo
    );

    MCAPI void removeRenderController(::std::string const& controllerName);

    MCAPI void setColorTexture(
        ::std::string const&      name,
        ::ResourceLocation const& resourceLocation,
        ::mce::TexturePtr const&  texture
    );

    MCAPI void setQueryableGeometryName(::HashedString name);

    MCAPI void setSpawnEgg(::SpawnEggInfo spawnEgg);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ActorTextureInfo getActorTextureInfo(
        ::std::shared_ptr<::ActorResourceDefinition> definition,
        ::std::string_view                           name,
        bool                                         returnFirstIfNotFound
    );

    MCAPI static ::PBRTexturePtrs getActorTexturePtrs(
        ::std::shared_ptr<::ActorResourceDefinition> definition,
        ::std::string const&                         name,
        bool                                         returnFirstIfNotFound
    );

    MCAPI static ::mce::TexturePtr getColorTexture(
        ::std::shared_ptr<::ActorResourceDefinition> definition,
        ::std::string const&                         name,
        bool                                         returnFirstIfNotFound
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ActorResourceDefinition const& rhs);

    MCAPI void* $ctor(
        ::HashedString      name,
        bool                isAttachable,
        ::SemVersion const& fullStackMinEngineVersion,
        ::SemVersion const& actorJsonMinEngineVersion
    );
    // NOLINTEND
};
