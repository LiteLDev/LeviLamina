#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackCategory.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class CompositePackSource;
class ContentIdentity;
class IContentKeyProvider;
class PackInstance;
class PackManifestFactory;
class PackSettingsFactory;
class PackSourceFactory;
class PackSourceReport;
class ResourceLocation;
class ResourcePack;
class ResourcePackStack;
struct InvalidPacksFilterGroup;
struct PackIdVersion;
struct PackInstanceId;
namespace Core { class Path; }
namespace mce { class UUID; }
// clang-format on

class IResourcePackRepository : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IResourcePackRepository() /*override*/;

    // vIndex: 1
    virtual void
    getResourcePacksByPackId(::std::vector<::PackInstanceId> const&, ::std::vector<::PackInstance>&) const = 0;

    // vIndex: 2
    virtual ::ResourcePack* getResourcePackForPackId(::PackIdVersion const&) const = 0;

    // vIndex: 3
    virtual ::ResourcePack* getResourcePackForPackIdInPath(::PackIdVersion const&, ::Core::Path const&) const = 0;

    // vIndex: 4
    virtual ::ResourcePack* getResourcePackByUUID(::mce::UUID const&) const = 0;

    // vIndex: 5
    virtual ::ResourcePack* getResourcePackForPackIdOwned(::PackIdVersion const&) const = 0;

    // vIndex: 6
    virtual ::ResourcePack* getResourcePackSatisfiesPackId(::PackIdVersion const&, bool) const = 0;

    // vIndex: 7
    virtual ::ResourcePack* getResourcePackContainingModule(::PackIdVersion const&) const = 0;

    // vIndex: 8
    virtual ::ResourcePack* getResourcePackInPath(::Core::Path const&) const = 0;

    // vIndex: 9
    virtual bool isResourcePackLoaded(::PackIdVersion const&, ::PackOrigin const&) = 0;

    // vIndex: 10
    virtual ::PackSourceReport const* getPackLoadingReport() const = 0;

    // vIndex: 11
    virtual ::ResourcePack* getEditorPack() const = 0;

    // vIndex: 12
    virtual ::ResourcePack* getVanillaPack() const = 0;

    // vIndex: 13
    virtual bool setServicePacks(::std::vector<::PackIdVersion>) = 0;

    // vIndex: 14
    virtual bool hasServicePacks(::std::vector<::PackIdVersion> const&) const = 0;

    // vIndex: 15
    virtual ::std::vector<::PackIdVersion> const& getServicePacks() const = 0;

    // vIndex: 16
    virtual void addServicePacksToStack(::ResourcePackStack&) const = 0;

    // vIndex: 17
    virtual void addCachedResourcePacks(::std::unordered_map<::ContentIdentity, ::std::string> const*) = 0;

    // vIndex: 18
    virtual void addWorldResourcePacks(::Core::Path const&) = 0;

    // vIndex: 19
    virtual void addPremiumWorldTemplateResourcePacks(::Core::Path const&, ::ContentIdentity const&) = 0;

    // vIndex: 20
    virtual void addTempWorldTemplateResourcePacks(::mce::UUID const&) = 0;

    // vIndex: 21
    virtual void removePacksLoadedFromCache() = 0;

    // vIndex: 22
    virtual void removePacksLoadedFromWorld() = 0;

    // vIndex: 23
    virtual ::Core::PathBuffer<::std::string> const getResourcePacksPath() const = 0;

    // vIndex: 24
    virtual ::Core::PathBuffer<::std::string> const getBehaviorPacksPath() const = 0;

    // vIndex: 25
    virtual ::Core::PathBuffer<::std::string> const getSkinPacksPath() const = 0;

    // vIndex: 26
    virtual ::Core::PathBuffer<::std::string> const getDevelopmentResourcePacksPath() const = 0;

    // vIndex: 27
    virtual ::Core::PathBuffer<::std::string> const getDevelopmentBehaviorPacksPath() const = 0;

    // vIndex: 28
    virtual ::Core::PathBuffer<::std::string> const getDevelopmentSkinPacksPath() const = 0;

    // vIndex: 29
    virtual ::Core::PathBuffer<::std::string> const getTreatmentPacksPath() const = 0;

    // vIndex: 30
    virtual void refreshPacks() = 0;

    // vIndex: 31
    virtual void requestReloadUserPacks() = 0;

    // vIndex: 32
    virtual ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> getKeyProvider() const = 0;

    // vIndex: 33
    virtual ::PackManifestFactory& getPackManifestFactory() = 0;

    // vIndex: 34
    virtual ::PackSettingsFactory& getPackSettingsFactory() const = 0;

    // vIndex: 35
    virtual ::PackSourceFactory& getPackSourceFactory() = 0;

    // vIndex: 36
    virtual ::CompositePackSource const* getWorldPackSource() const = 0;

    // vIndex: 37
    virtual ::std::vector<::ResourcePack*> getPacksByResourceLocation(::PackOrigin) const = 0;

    // vIndex: 38
    virtual ::std::vector<::ResourcePack*> getPacksByType(::PackType) const = 0;

    // vIndex: 39
    virtual ::std::vector<::ResourcePack*> getPacksByCategory(::PackCategory) const = 0;

    // vIndex: 40
    virtual void addInvalidPack(::ResourceLocation const&, ::PackType) = 0;

    // vIndex: 42
    virtual ::std::vector<::ResourceLocation> const& getInvalidPacks(::PackType) const = 0;

    // vIndex: 41
    virtual ::std::vector<::ResourceLocation> getInvalidPacks(::InvalidPacksFilterGroup const&) const = 0;

    // vIndex: 43
    virtual void deletePack(::ResourceLocation const&) = 0;

    // vIndex: 44
    virtual void deletePackFiles(::ResourceLocation const&) = 0;

    // vIndex: 45
    virtual void postDeletePack(::ResourceLocation const&) = 0;

    // vIndex: 46
    virtual void untrackInvalidPack(::ResourceLocation const&) = 0;

    // vIndex: 47
    virtual void registerResourcePackRemovedCallback(void*, ::std::function<void(::ResourcePack*)>) = 0;

    // vIndex: 48
    virtual void unregisterResourcePackRemovedCallback(void*) = 0;

    // vIndex: 49
    virtual bool isInitialized() = 0;
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
