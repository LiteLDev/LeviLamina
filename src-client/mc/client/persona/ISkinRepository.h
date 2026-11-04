#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/persona/defaults/DefaultSkinType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/string/BasicStackString.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/shared_types/persona/ArmSizeType.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class IContentKeyProvider;
class Pack;
class ResourceLocation;
class ResourcePackManager;
class SemVersion;
class SerializedSkinRef;
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
    virtual ~ISkinRepository() /*override*/ = default;

    virtual void update(::ResourcePackManager& resourcePackManager) = 0;

    virtual void flushResourceLoaderTasks() = 0;

    virtual void
    addLoadListener(::std::weak_ptr<bool> existanceTracker, ::std::function<void(::mce::UUID const&)> callback) = 0;

    virtual bool importSkinPack(::gsl::not_null<::std::shared_ptr<::Pack>> pack, bool isTitleLocked) = 0;

    virtual bool
    loadCustomSkin(::std::string const& customSkinId, ::SharedTypes::persona::ArmSizeType customSkinArmSize) = 0;

    virtual bool tryLoadSkinPack(::mce::UUID const& packId, bool shouldNotifyPlayer) = 0;

    virtual bool loadSkinPack(::mce::UUID const& packId) = 0;

    virtual void loadSkinPackAsync(::mce::UUID const& packId, ::SkinPackMeta const& metadata) = 0;

    virtual void unloadAndDeleteSkinPack(::mce::UUID const& packId) = 0;

    virtual void unloadAndDeleteSkinPackForReimport(::mce::UUID const& packId) = 0;

    virtual void cancelPendingLoads() = 0;

    virtual ::std::vector<::Pack const*> const getKnownSkinPacks() const = 0;

    virtual ::std::vector<::Pack const*> const getKnownSkinPacksInPackage() const = 0;

    virtual ::std::vector<::Pack const*> const getKnownSkinPacksInUserDir() const = 0;

    virtual ::std::vector<::Pack const*> const getKnownSkinPacksInPremiumDir() const = 0;

    virtual void forEachPack(::std::function<void(::Pack const&)> const& callback) const = 0;

    virtual void forEachLoadedSkinPack(::std::function<void(::SkinPack const&)> const& callback) const = 0;

    virtual ::SkinPack* getSkinPackById(::mce::UUID const& packId) const = 0;

    virtual ::SkinPack* getSkinPackByIdHash(uint64 packIdHash) const = 0;

    virtual ::SemVersion const& getVersionOfKnownSkinPack(::mce::UUID const& packId) const = 0;

    virtual bool isSkinPackKnown(::mce::UUID const& packId) const = 0;

    virtual bool isSkinPackLoaded(::mce::UUID const& packId) const = 0;

    virtual bool isKnownSkinPackUnLoaded(::mce::UUID const& packId) const = 0;

    virtual bool isSkinPackLoading(::mce::UUID const& packId) const = 0;

    virtual bool isSkinPackOwned(::ContentIdentity const& contentIdentity) const = 0;

    virtual ::Skin const* getSkinBySerializableName(::std::string const& serializableName) const = 0;

    virtual ::Skin const* getSkin(::SkinHandle const& skinHandle) const = 0;

    virtual bool canUseSkin(::Skin const* skin) const = 0;

    virtual bool canUseSkin(::SkinHandle const& skinHandle) const = 0;

    virtual ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    storeCustomSkin(::ResourceLocation const& sourceLocation) = 0;

    virtual ::SkinHandle addCustomSkin(::SkinHandle const& customSkinHandle) = 0;

    virtual ::SkinHandle
    addCustomSkin(::persona::DefaultSkinType bodySkinType, ::ResourceLocation const& customImageLocation) = 0;

    virtual ::SkinHandle
    addCustomSkin(::SerializedSkinRef const& geoSerializedSkin, ::ResourceLocation const& customImageLocation) = 0;

    virtual bool canPickSkin() const = 0;

    virtual void pickSkin(::std::function<void(bool, ::std::string)> onPickSkin) = 0;

    virtual void reloadSkinPackLocText() = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> getSkinKeyProvider() const = 0;

    virtual bool isValidSkin(::ResourceLocation const& skinLocation) const = 0;

    virtual void loadSkin(::ResourceLocation const& skinLocation) = 0;

    virtual void unloadSkin(::ResourceLocation const& skinLocation) = 0;

    virtual bool loadCustomSkinTexture(::ResourceLocation const& skinLocation) = 0;

    virtual void beginAsyncInit(::TaskGroup& taskGroup) = 0;

    virtual bool isInitialized() const = 0;

    virtual uint64 getLoadedSkinPackCount() const = 0;

    virtual uint64 getLoadingSkinPackCount() const = 0;

    virtual uint64 getUnloadedSkinPackCount() const = 0;

    virtual void deleteUnreferencedCustomSkinFiles(::std::vector<::SkinHandle> const& referencedSkins) = 0;

    virtual ::Core::PathBuffer<::std::string> getCustomSkinDirectoryPath() const = 0;

    virtual ::std::optional<::Core::PathBuffer<::std::string>> getSharedCustomSkinDirectoryPath() const = 0;
    // NOLINTEND
};
