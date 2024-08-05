#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
namespace Bedrock::PubSub { class Subscription; }
namespace mce { class UUID; }
// clang-format on

class IWorldTemplateManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    IWorldTemplateManager& operator=(IWorldTemplateManager const&);
    IWorldTemplateManager(IWorldTemplateManager const&);
    IWorldTemplateManager();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IWorldTemplateManager();

    // vIndex: 1
    virtual struct WorldTemplateInfo const*
    findInstalledWorldTemplateByUUID(std::vector<class mce::UUID> const& packUUIDs) const = 0;

    // vIndex: 2
    virtual class Bedrock::PubSub::Subscription
        registerModifiedCallback(std::function<void(std::pair<std::string, bool> const&)>) = 0;

    // vIndex: 3
    virtual std::vector<std::unique_ptr<struct WorldTemplateInfo>> const& getLocalTemplates() const = 0;

    // NOLINTEND
};
