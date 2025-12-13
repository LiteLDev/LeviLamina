#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class WorldTemplateCollectionView;
struct PackIdVersion;
struct WorldTemplateInfo;
namespace Bedrock::PubSub { class Subscription; }
namespace mce { class UUID; }
// clang-format on

class IWorldTemplateManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IWorldTemplateManager() /*override*/;

    virtual void flushResourceLoaderTasks() = 0;

    virtual ::WorldTemplateInfo const* findInstalledWorldTemplateByUUID(::std::vector<::mce::UUID> const&) const = 0;

    virtual ::Bedrock::PubSub::Subscription
        registerModifiedCallback(::std::function<void(::std::pair<::std::string, bool> const&)>) = 0;

    virtual ::std::vector<::std::unique_ptr<::WorldTemplateInfo const>> const& getLocalTemplates() const = 0;

    virtual void populateWorldTemplates() = 0;

    virtual uint64 getWorldTemplateSize() const = 0;

    virtual ::WorldTemplateInfo const& getWorldTemplateAtIndex(int) const = 0;

    virtual void deleteWorldTemplateAndFiles(::PackIdVersion const&) = 0;

    virtual ::WorldTemplateInfo const* findInstalledWorldTemplate(::PackIdVersion const&) const = 0;

    virtual ::WorldTemplateCollectionView createView(::mce::UUID const&) const = 0;

    virtual void forEachWorldTemplate(::std::function<void(::WorldTemplateInfo const&)> const&) const = 0;

    virtual bool isInitialized() const = 0;
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
