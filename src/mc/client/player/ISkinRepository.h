#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/player/DefaultSkin.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/string/BasicStackString.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/actor/player/persona/ArmSize.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class IContentKeyProvider;
class Pack;
class ResourceLocation;
class ResourcePackManager;
class SemVersion;
class SerializedSkin;
class Skin;
class SkinHandle;
class SkinPack;
class TaskGroup;
struct SkinPackMeta;
namespace mce { class UUID; }
// clang-format on

class ISkinRepository : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ISkinRepository() /*override*/ = default;

    // vIndex: 1
    virtual void update(::ResourcePackManager&) = 0;

    // vIndex: 2
    virtual void addLoadListener(::std::weak_ptr<bool>, ::std::function<void(::mce::UUID const&)>) = 0;

    // vIndex: 3
    virtual bool importSkinPack(::Pack&, bool) = 0;

    // vIndex: 4
    virtual bool loadCustomSkin(::std::string const&, ::persona::ArmSize::Type) = 0;

    // vIndex: 5
    virtual bool loadSkinPack(::mce::UUID const&, ::std::function<void()>) = 0;

    // vIndex: 6
    virtual void loadSkinPackAsync(::mce::UUID const&, ::SkinPackMeta const&) = 0;

    // vIndex: 7
    virtual void unloadAndDeleteSkinPack(::mce::UUID const&) = 0;

    // vIndex: 8
    virtual void cancelPendingLoads() = 0;

    // vIndex: 9
    virtual ::std::vector<::Pack const*> const getKnownSkinPacks() const = 0;

    // vIndex: 10
    virtual ::std::vector<::Pack const*> const getKnownSkinPacksInPackage() const = 0;

    // vIndex: 11
    virtual ::std::vector<::Pack const*> const getKnownSkinPacksInUserDir() const = 0;

    // vIndex: 12
    virtual ::std::vector<::Pack const*> const getKnownSkinPacksInPremiumDir() const = 0;

    // vIndex: 13
    virtual void forEachPack(::std::function<void(::Pack const&)> const&) const = 0;

    // vIndex: 14
    virtual ::std::vector<::std::unique_ptr<::SkinPack>> const& getLoadedSkinPacks() const = 0;

    // vIndex: 15
    virtual ::SkinPack* getSkinPackById(::mce::UUID const&) const = 0;

    // vIndex: 16
    virtual ::SkinPack* getSkinPackByIdHash(uint64) const = 0;

    // vIndex: 17
    virtual ::SemVersion const& getVersionOfKnownSkinPack(::mce::UUID const&) const = 0;

    // vIndex: 18
    virtual bool isSkinPackKnown(::mce::UUID const&) const = 0;

    // vIndex: 19
    virtual bool isSkinPackTrusted(::mce::UUID const&) const = 0;

    // vIndex: 20
    virtual bool isSkinPackLoaded(::mce::UUID const&) const = 0;

    // vIndex: 21
    virtual bool isKnownSkinPackUnLoaded(::mce::UUID const&) const = 0;

    // vIndex: 22
    virtual bool isSkinPackLoading(::mce::UUID const&) const = 0;

    // vIndex: 23
    virtual bool isSkinPackOwned(::ContentIdentity const&) const = 0;

    // vIndex: 24
    virtual ::Skin const* getSkinBySerializableName(::std::string const&) const = 0;

    // vIndex: 25
    virtual ::Skin const* getSkin(::SkinHandle const&) const = 0;

    // vIndex: 27
    virtual bool canUseSkin(::Skin const*) const = 0;

    // vIndex: 26
    virtual bool canUseSkin(::SkinHandle const&) const = 0;

    // vIndex: 28
    virtual ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> storeCustomSkin(::ResourceLocation const&) = 0;

    // vIndex: 31
    virtual ::SkinHandle addCustomSkin(::SkinHandle const&) = 0;

    // vIndex: 30
    virtual ::SkinHandle addCustomSkin(::DefaultSkin const, ::ResourceLocation const&) = 0;

    // vIndex: 29
    virtual ::SkinHandle addCustomSkin(::SerializedSkin const&, ::ResourceLocation const&) = 0;

    // vIndex: 32
    virtual bool storeSkin(::ResourceLocation const&, ::ResourceLocation const&) = 0;

    // vIndex: 33
    virtual bool canPickSkin() const = 0;

    // vIndex: 34
    virtual void pickSkin(::std::function<void(bool, ::std::string)>) = 0;

    // vIndex: 35
    virtual void reloadSkinPackLocText() = 0;

    // vIndex: 36
    virtual ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> getSkinKeyProvider() const = 0;

    // vIndex: 37
    virtual ::Skin const* getDefaultSkinBySerializableName(::std::string const&) const = 0;

    // vIndex: 38
    virtual ::std::string const _getDefaultSkinSerializableName(::std::string const&) const = 0;

    // vIndex: 39
    virtual ::std::string _getCustomSkinSerializableName(::DefaultSkin) const = 0;

    // vIndex: 40
    virtual bool isValidSkin(::ResourceLocation const&) const = 0;

    // vIndex: 41
    virtual void loadSkin(::ResourceLocation const&) = 0;

    // vIndex: 42
    virtual void unloadSkin(::ResourceLocation const&) = 0;

    // vIndex: 43
    virtual bool loadCustomSkinTexture(::ResourceLocation const&) = 0;

    // vIndex: 44
    virtual void beginAsyncInit(::TaskGroup&) = 0;

    // vIndex: 45
    virtual bool isInitialized() const = 0;

    // vIndex: 46
    virtual uint64 getLoadedSkinPackCount() = 0;

    // vIndex: 47
    virtual uint64 getLoadingSkinPackCount() = 0;

    // vIndex: 48
    virtual void unloadUnusedCustomSkinTextures(::std::vector<::SkinHandle> const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
