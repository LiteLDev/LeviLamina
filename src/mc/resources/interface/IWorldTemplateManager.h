#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
struct WorldTemplateInfo;
namespace Bedrock::PubSub { class Subscription; }
namespace mce { class UUID; }
// clang-format on

class IWorldTemplateManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IWorldTemplateManager() /*override*/;

    // vIndex: 1
    virtual ::WorldTemplateInfo const* findInstalledWorldTemplateByUUID(::std::vector<::mce::UUID> const&) const = 0;

    // vIndex: 2
    virtual ::Bedrock::PubSub::Subscription
        registerModifiedCallback(::std::function<void(::std::pair<::std::string, bool> const&)>) = 0;

    // vIndex: 3
    virtual ::std::vector<::std::unique_ptr<::WorldTemplateInfo>> const& getLocalTemplates() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
