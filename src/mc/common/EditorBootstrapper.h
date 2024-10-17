#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class EditorBootstrapper : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    EditorBootstrapper& operator=(EditorBootstrapper const&);
    EditorBootstrapper(EditorBootstrapper const&);
    EditorBootstrapper();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorBootstrapper() = default;

    MCAPI static class PackCapability getPackCapability(std::optional<bool> creator_editor_override);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static std::string const& EDITOR_MODE_ARGUMENT_KEY();

    MCAPI static std::string const& EDITOR_MODE_ARGUMENT_VALUE();

    // NOLINTEND
};
