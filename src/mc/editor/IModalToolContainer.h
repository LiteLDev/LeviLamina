#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace Editor::DataStore { struct SelectedToolChangeRequest; }
// clang-format on

namespace Editor::DataStore {

class IModalToolContainer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Bedrock::PubSub::Subscription
    onSelectedToolChangeRequested(::std::function<void(::Editor::DataStore::SelectedToolChangeRequest&)> callback) = 0;

    virtual ~IModalToolContainer() = default;
    // NOLINTEND
};

} // namespace Editor::DataStore
