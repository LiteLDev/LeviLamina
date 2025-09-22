#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/player/DefaultSkin.h"
#include "mc/client/player/ISkinRepository.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/string/BasicStackString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/ImagePickingCallback.h"
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

class SkinRepository : public ::ISkinRepository,
                       public ::ImagePickingCallback,
                       public ::std::enable_shared_from_this<::SkinRepository> {
public:
    // SkinRepository inner types declare
    // clang-format off
    struct LoadListener;
    // clang-format on

    // SkinRepository inner types define
    struct LoadListener {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnke441c0;
        ::ll::UntypedStorage<8, 64> mUnkb206d2;
        // NOLINTEND

    public:
        // prevent constructor by default
        LoadListener& operator=(LoadListener const&);
        LoadListener(LoadListener const&);
        LoadListener();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk715019;
    ::ll::UntypedStorage<8, 24> mUnk71a8f3;
    ::ll::UntypedStorage<8, 24> mUnk7bb5b3;
    ::ll::UntypedStorage<8, 24> mUnkfd8437;
    ::ll::UntypedStorage<8, 24> mUnk4b0178;
    ::ll::UntypedStorage<8, 64> mUnk97be98;
    ::ll::UntypedStorage<8, 24> mUnk4bd95d;
    ::ll::UntypedStorage<8, 8>  mUnk70a3c9;
    ::ll::UntypedStorage<8, 8>  mUnkbbc430;
    ::ll::UntypedStorage<8, 24> mUnk269f8a;
    ::ll::UntypedStorage<8, 24> mUnk9f9098;
    ::ll::UntypedStorage<8, 64> mUnkd40422;
    ::ll::UntypedStorage<1, 1>  mUnk184d8d;
    ::ll::UntypedStorage<8, 16> mUnk5c7fe7;
    ::ll::UntypedStorage<8, 24> mUnkdbc0b1;
    ::ll::UntypedStorage<8, 8>  mUnk65c979;
    ::ll::UntypedStorage<1, 1>  mUnk44a0c2;
    ::ll::UntypedStorage<8, 16> mUnkdda148;
    ::ll::UntypedStorage<8, 8>  mUnkbe90bf;
    // NOLINTEND

public:
    // prevent constructor by default
    SkinRepository& operator=(SkinRepository const&);
    SkinRepository(SkinRepository const&);
    SkinRepository();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SkinRepository() /*override*/ = default;

    // vIndex: 2
    virtual void flushResourceLoaderTasks() /*override*/;

    // vIndex: 1
    virtual void update(::ResourcePackManager&) /*override*/;

    // vIndex: 3
    virtual void addLoadListener(::std::weak_ptr<bool>, ::std::function<void(::mce::UUID const&)>) /*override*/;

    // vIndex: 4
    virtual bool importSkinPack(::Pack&, bool) /*override*/;

    // vIndex: 5
    virtual bool loadCustomSkin(::std::string const&, ::persona::ArmSize::Type) /*override*/;

    // vIndex: 6
    virtual bool loadSkinPack(::mce::UUID const&, ::std::function<void()>) /*override*/;

    // vIndex: 7
    virtual void loadSkinPackAsync(::mce::UUID const&, ::SkinPackMeta const&) /*override*/;

    // vIndex: 8
    virtual void unloadAndDeleteSkinPack(::mce::UUID const&) /*override*/;

    // vIndex: 9
    virtual void cancelPendingLoads() /*override*/;

    // vIndex: 10
    virtual ::std::vector<::Pack const*> const getKnownSkinPacks() const /*override*/;

    // vIndex: 11
    virtual ::std::vector<::Pack const*> const getKnownSkinPacksInPackage() const /*override*/;

    // vIndex: 12
    virtual ::std::vector<::Pack const*> const getKnownSkinPacksInUserDir() const /*override*/;

    // vIndex: 13
    virtual ::std::vector<::Pack const*> const getKnownSkinPacksInPremiumDir() const /*override*/;

    // vIndex: 14
    virtual void forEachPack(::std::function<void(::Pack const&)> const&) const /*override*/;

    // vIndex: 15
    virtual ::std::vector<::std::unique_ptr<::SkinPack>> const& getLoadedSkinPacks() const /*override*/;

    // vIndex: 16
    virtual ::SkinPack* getSkinPackById(::mce::UUID const&) const /*override*/;

    // vIndex: 17
    virtual ::SkinPack* getSkinPackByIdHash(uint64) const /*override*/;

    // vIndex: 18
    virtual ::SemVersion const& getVersionOfKnownSkinPack(::mce::UUID const&) const /*override*/;

    // vIndex: 19
    virtual bool isSkinPackKnown(::mce::UUID const&) const /*override*/;

    // vIndex: 20
    virtual bool isSkinPackTrusted(::mce::UUID const&) const /*override*/;

    // vIndex: 21
    virtual bool isSkinPackLoaded(::mce::UUID const&) const /*override*/;

    // vIndex: 22
    virtual bool isKnownSkinPackUnLoaded(::mce::UUID const&) const /*override*/;

    // vIndex: 23
    virtual bool isSkinPackLoading(::mce::UUID const&) const /*override*/;

    // vIndex: 24
    virtual bool isSkinPackOwned(::ContentIdentity const&) const /*override*/;

    // vIndex: 25
    virtual ::Skin const* getSkinBySerializableName(::std::string const&) const /*override*/;

    // vIndex: 26
    virtual ::Skin const* getSkin(::SkinHandle const&) const /*override*/;

    // vIndex: 28
    virtual bool canUseSkin(::Skin const*) const /*override*/;

    // vIndex: 27
    virtual bool canUseSkin(::SkinHandle const&) const /*override*/;

    // vIndex: 29
    virtual ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    storeCustomSkin(::ResourceLocation const&) /*override*/;

    // vIndex: 32
    virtual ::SkinHandle addCustomSkin(::SkinHandle const&) /*override*/;

    // vIndex: 31
    virtual ::SkinHandle addCustomSkin(::DefaultSkin const, ::ResourceLocation const&) /*override*/;

    // vIndex: 30
    virtual ::SkinHandle addCustomSkin(::SerializedSkin const&, ::ResourceLocation const&) /*override*/;

    // vIndex: 33
    virtual bool storeSkin(::ResourceLocation const&, ::ResourceLocation const&) /*override*/;

    // vIndex: 34
    virtual bool canPickSkin() const /*override*/;

    // vIndex: 35
    virtual void pickSkin(::std::function<void(bool, ::std::string)>) /*override*/;

    // vIndex: 36
    virtual void reloadSkinPackLocText() /*override*/;

    // vIndex: 37
    virtual ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> getSkinKeyProvider() const /*override*/;

    // vIndex: 38
    virtual ::Skin const* getDefaultSkinBySerializableName(::std::string const&) const /*override*/;

    // vIndex: 39
    virtual ::std::string const _getDefaultSkinSerializableName(::std::string const&) const /*override*/;

    // vIndex: 40
    virtual ::std::string _getCustomSkinSerializableName(::DefaultSkin) const /*override*/;

    // vIndex: 41
    virtual bool isValidSkin(::ResourceLocation const&) const /*override*/;

    // vIndex: 42
    virtual void loadSkin(::ResourceLocation const&) /*override*/;

    // vIndex: 43
    virtual void unloadSkin(::ResourceLocation const&) /*override*/;

    // vIndex: 44
    virtual bool loadCustomSkinTexture(::ResourceLocation const&) /*override*/;

    // vIndex: 45
    virtual void beginAsyncInit(::TaskGroup&) /*override*/;

    // vIndex: 46
    virtual bool isInitialized() const /*override*/;

    // vIndex: 47
    virtual uint64 getLoadedSkinPackCount() /*override*/;

    // vIndex: 48
    virtual uint64 getLoadingSkinPackCount() /*override*/;

    // vIndex: 49
    virtual void unloadUnusedCustomSkinTextures(::std::vector<::SkinHandle> const&) /*override*/;

    // vIndex: 1
    virtual void onImagePickingSuccess(::std::string const&) /*override*/;

    // vIndex: 2
    virtual void onImagePickingCanceled() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
