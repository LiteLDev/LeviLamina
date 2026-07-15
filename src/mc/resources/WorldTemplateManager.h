#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/resources/interface/IWorldTemplateManager.h"

// auto generated forward declare list
// clang-format off
class IWorldTemplateManagerInitializer;
class Pack;
class WorldTemplateCollectionView;
struct PackIdVersion;
struct WorldTemplateInfo;
struct WorldTemplateManagerInitData;
namespace Bedrock::PubSub { class Subscription; }
namespace mce { class UUID; }
// clang-format on

class WorldTemplateManager : public ::IWorldTemplateManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>  mUnk8b6b74;
    ::ll::UntypedStorage<8, 80>  mUnk4899ec;
    ::ll::UntypedStorage<1, 1>   mUnkc27adc;
    ::ll::UntypedStorage<1, 1>   mUnke65739;
    ::ll::UntypedStorage<8, 616> mUnkacb3ef;
    ::ll::UntypedStorage<8, 8>   mUnk3a5b23;
    ::ll::UntypedStorage<8, 64>  mUnk7f95c8;
    ::ll::UntypedStorage<8, 128> mUnk17d444;
    ::ll::UntypedStorage<8, 8>   mUnkbe7c43;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateManager& operator=(WorldTemplateManager const&);
    WorldTemplateManager(WorldTemplateManager const&);
    WorldTemplateManager();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~WorldTemplateManager() /*override*/;
#else // LL_PLAT_C
    virtual ~WorldTemplateManager() /*override*/ = default;
#endif

    virtual void flushResourceLoaderTasks() /*override*/;

    virtual void populateWorldTemplates() /*override*/;

    virtual uint64 getWorldTemplateSize() const /*override*/;

#ifdef LL_PLAT_S
    virtual ::WorldTemplateInfo const& getWorldTemplateAtIndex(int index) const /*override*/;
#else // LL_PLAT_C
    virtual ::WorldTemplateInfo const& getWorldTemplateAtIndex(int) const /*override*/;
#endif

    virtual ::std::vector<::std::unique_ptr<::WorldTemplateInfo const>> const& getLocalTemplates() const /*override*/;

#ifdef LL_PLAT_S
    virtual ::WorldTemplateInfo const*
    findInstalledWorldTemplateByUUID(::std::vector<::mce::UUID> const& packUUIDs) const /*override*/;
#else // LL_PLAT_C
    virtual ::WorldTemplateInfo const* findInstalledWorldTemplateByUUID(::std::vector<::mce::UUID> const&) const
        /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual ::WorldTemplateInfo const* findInstalledWorldTemplate(::PackIdVersion const& packIdentityToFind) const
        /*override*/;
#else // LL_PLAT_C
    virtual ::WorldTemplateInfo const* findInstalledWorldTemplate(::PackIdVersion const&) const /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void forEachWorldTemplate(::std::function<void(::WorldTemplateInfo const&)> const& callback) const
        /*override*/;
#else // LL_PLAT_C
    virtual void forEachWorldTemplate(::std::function<void(::WorldTemplateInfo const&)> const&) const /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void deleteWorldTemplateAndFiles(::PackIdVersion const& packIdentity) /*override*/;
#else // LL_PLAT_C
    virtual void deleteWorldTemplateAndFiles(::PackIdVersion const&) /*override*/;
#endif

    virtual bool isInitialized() const /*override*/;

#ifdef LL_PLAT_S
    virtual ::Bedrock::PubSub::Subscription registerModifiedCallback(
        ::std::function<void(::std::pair<::std::string, bool> const&)> newCallbackFunction
    ) /*override*/;
#else // LL_PLAT_C
    virtual ::Bedrock::PubSub::Subscription
        registerModifiedCallback(::std::function<void(::std::pair<::std::string, bool> const&)>) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual ::WorldTemplateCollectionView createView(::mce::UUID const& toView) const /*override*/;
#else // LL_PLAT_C
    virtual ::WorldTemplateCollectionView createView(::mce::UUID const&) const /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldTemplateManager(::std::unique_ptr<::IWorldTemplateManagerInitializer> initializer, bool initAsync);

#ifdef LL_PLAT_C
    MCNAPI void _initialize(::WorldTemplateManagerInitData&& data);

    MCNAPI void addKnownPackFromImport(::Pack const& pack);

    MCNAPI ::Core::PathBuffer<::std::string> getWorldTemplatesPath() const;

    MCNAPI ::std::vector<::gsl::not_null<::std::shared_ptr<::Pack const>>>
    loadPacksForTemplate(::WorldTemplateInfo const& info);

    MCNAPI void onStorageDirectoryChanged();

    MCNAPI void setWorldIconAllowListPath(::WorldTemplateInfo const& info, ::std::string path);

    MCNAPI void sortWorldTemplates();

    MCNAPI void update();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::unique_ptr<::IWorldTemplateManagerInitializer> initializer, bool initAsync);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void $flushResourceLoaderTasks();

    MCNAPI void $populateWorldTemplates();

    MCNAPI uint64 $getWorldTemplateSize() const;

    MCNAPI ::WorldTemplateInfo const& $getWorldTemplateAtIndex(int index) const;

    MCNAPI ::std::vector<::std::unique_ptr<::WorldTemplateInfo const>> const& $getLocalTemplates() const;

    MCNAPI ::WorldTemplateInfo const*
    $findInstalledWorldTemplateByUUID(::std::vector<::mce::UUID> const& packUUIDs) const;

    MCNAPI ::WorldTemplateInfo const* $findInstalledWorldTemplate(::PackIdVersion const& packIdentityToFind) const;

    MCNAPI void $forEachWorldTemplate(::std::function<void(::WorldTemplateInfo const&)> const& callback) const;

    MCNAPI void $deleteWorldTemplateAndFiles(::PackIdVersion const& packIdentity);

    MCNAPI bool $isInitialized() const;

    MCNAPI ::Bedrock::PubSub::Subscription
    $registerModifiedCallback(::std::function<void(::std::pair<::std::string, bool> const&)> newCallbackFunction);

    MCNAPI ::WorldTemplateCollectionView $createView(::mce::UUID const& toView) const;
#endif


    // NOLINTEND
};
