#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StructureTemplate;
namespace Editor { class EditorStructureTemplate; }
namespace Editor::StructureDataCache { class IStructureDataProvider; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Services {

class StructureDataCacheServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StructureDataCacheServiceProvider() = default;

    virtual void
        registerStructureDataProvider(::std::weak_ptr<::Editor::StructureDataCache::IStructureDataProvider>) = 0;

    virtual void informStructureDataRemoved(::mce::UUID const&) = 0;

    virtual void informStructureDataUpdated(
        ::mce::UUID const&,
        ::std::variant<
            ::StructureTemplate const*,
            ::Editor::EditorStructureTemplate const*,
            ::std::shared_ptr<::StructureTemplate const>,
            ::std::shared_ptr<::Editor::EditorStructureTemplate const>> const&
    ) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services
