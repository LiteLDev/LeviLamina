#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/HotbarElementBase.h"

// auto generated forward declare list
// clang-format off
namespace Editor { struct SerializableProbabilityHotbarElement; }
namespace Editor { struct SerializableSimpleHotbarElement; }
// clang-format on

namespace Editor {

class SimpleHotbarElement : public ::Editor::HotbarElementBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk3aced2;
    // NOLINTEND

public:
    // prevent constructor by default
    SimpleHotbarElement& operator=(SimpleHotbarElement const&);
    SimpleHotbarElement(SimpleHotbarElement const&);
    SimpleHotbarElement();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SimpleHotbarElement() /*override*/ = default;

    virtual ::Editor::HotbarElementBase::HotbarElementType getHotbarElementType() const /*override*/;

    virtual void removeDisallowedIds() /*override*/;

    virtual ::std::variant<::Editor::SerializableSimpleHotbarElement, ::Editor::SerializableProbabilityHotbarElement>
    baseSnapshotFrom() const /*override*/;

    virtual bool operator==(::Editor::HotbarElementBase const&) const /*override*/;
    // NOLINTEND
};

} // namespace Editor
