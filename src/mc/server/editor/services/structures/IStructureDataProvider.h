#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class StructureTemplate;
namespace Editor { class EditorStructureTemplate; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::StructureDataCache {

class IStructureDataProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool hasStructureData(::mce::UUID const&) const = 0;

    virtual ::Scripting::Result_deprecated<::std::variant<
        ::StructureTemplate const*,
        ::Editor::EditorStructureTemplate const*,
        ::std::shared_ptr<::StructureTemplate const>,
        ::std::shared_ptr<::Editor::EditorStructureTemplate const>>>
    getStructureData(::mce::UUID const&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::StructureDataCache
