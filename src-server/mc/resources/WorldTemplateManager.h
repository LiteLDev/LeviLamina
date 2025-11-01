#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ResourceFileSystem.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/resources/interface/IWorldTemplateManager.h"

// auto generated forward declare list
// clang-format off
class IFileAccess;
class IWorldTemplateManagerInitializer;
class WorldTemplateCollectionView;
struct PackIdVersion;
struct WorldTemplateInfo;
struct WorldTemplateManagerInitData;
namespace Bedrock::PubSub { class Subscription; }
namespace Core { class Path; }
namespace mce { class UUID; }
// clang-format on

class WorldTemplateManager : public ::IWorldTemplateManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk8b6b74;
    ::ll::UntypedStorage<8, 80> mUnk4899ec;
    ::ll::UntypedStorage<1, 1> mUnkc27adc;
    ::ll::UntypedStorage<1, 1> mUnke65739;
    ::ll::UntypedStorage<8, 616> mUnk8c2b95;
    ::ll::UntypedStorage<8, 8> mUnk6ded12;
    ::ll::UntypedStorage<8, 64> mUnk15675e;
    ::ll::UntypedStorage<8, 128> mUnk45ddcd;
    ::ll::UntypedStorage<8, 8> mUnk4864e0;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateManager& operator=(WorldTemplateManager const&);
    WorldTemplateManager(WorldTemplateManager const&);
    WorldTemplateManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WorldTemplateManager() /*override*/;

    // vIndex: 1
    virtual void flushResourceLoaderTasks() /*override*/;

    // vIndex: 5
    virtual void populateWorldTemplates() /*override*/;

    // vIndex: 6
    virtual uint64 getWorldTemplateSize() const /*override*/;

    // vIndex: 7
    virtual ::WorldTemplateInfo const& getWorldTemplateAtIndex(int index) const /*override*/;

    // vIndex: 4
    virtual ::std::vector<::std::unique_ptr<::WorldTemplateInfo const>> const& getLocalTemplates() const /*override*/;

    // vIndex: 2
    virtual ::WorldTemplateInfo const* findInstalledWorldTemplateByUUID(::std::vector<::mce::UUID> const& packUUIDs) const /*override*/;

    // vIndex: 9
    virtual ::WorldTemplateInfo const* findInstalledWorldTemplate(::PackIdVersion const& packIdentityToFind) const /*override*/;

    // vIndex: 11
    virtual void forEachWorldTemplate(::std::function<void(::WorldTemplateInfo const&)> const& callback) const /*override*/;

    // vIndex: 8
    virtual void deleteWorldTemplateAndFiles(::PackIdVersion const& packIdentity) /*override*/;

    // vIndex: 12
    virtual bool isInitialized() const /*override*/;

    // vIndex: 3
    virtual ::Bedrock::PubSub::Subscription registerModifiedCallback(::std::function<void(::std::pair<::std::string, bool> const&)> newCallbackFunction) /*override*/;

    // vIndex: 10
    virtual ::WorldTemplateCollectionView createView(::mce::UUID const& toView) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldTemplateManager(::std::unique_ptr<::IWorldTemplateManagerInitializer> initializer, bool initAsync);

    MCNAPI void _deleteWorldTemplate(::PackIdVersion const& packIdentity, ::std::function<bool(::Core::Path const&)> deleteWorldCallback);

    MCNAPI void _initialize(::WorldTemplateManagerInitData&& data);

    MCNAPI void sortWorldTemplates();
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
    MCNAPI void $flushResourceLoaderTasks();

    MCNAPI void $populateWorldTemplates();

    MCNAPI uint64 $getWorldTemplateSize() const;

    MCNAPI ::WorldTemplateInfo const& $getWorldTemplateAtIndex(int index) const;

    MCNAPI ::std::vector<::std::unique_ptr<::WorldTemplateInfo const>> const& $getLocalTemplates() const;

    MCNAPI ::WorldTemplateInfo const* $findInstalledWorldTemplateByUUID(::std::vector<::mce::UUID> const& packUUIDs) const;

    MCNAPI ::WorldTemplateInfo const* $findInstalledWorldTemplate(::PackIdVersion const& packIdentityToFind) const;

    MCNAPI void $forEachWorldTemplate(::std::function<void(::WorldTemplateInfo const&)> const& callback) const;

    MCNAPI void $deleteWorldTemplateAndFiles(::PackIdVersion const& packIdentity);

    MCNAPI bool $isInitialized() const;

    MCNAPI ::Bedrock::PubSub::Subscription $registerModifiedCallback(::std::function<void(::std::pair<::std::string, bool> const&)> newCallbackFunction);

    MCNAPI ::WorldTemplateCollectionView $createView(::mce::UUID const& toView) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
