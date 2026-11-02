#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/SimpleWeightedEntry.h"
#include "mc/editor/HotbarElementBase.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Editor { struct SerializableProbabilityHotbarElement; }
namespace Editor { struct SerializableSimpleHotbarElement; }
// clang-format on

namespace Editor {

class ProbabilityHotbarElement : public ::Editor::HotbarElementBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk9b1725;
    // NOLINTEND

public:
    // prevent constructor by default
    ProbabilityHotbarElement& operator=(ProbabilityHotbarElement const&);
    ProbabilityHotbarElement(ProbabilityHotbarElement const&);
    ProbabilityHotbarElement();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ProbabilityHotbarElement() /*override*/ = default;

    virtual ::Editor::HotbarElementBase::HotbarElementType getHotbarElementType() const /*override*/;

    virtual void removeDisallowedIds() /*override*/;

    virtual ::std::variant<::Editor::SerializableSimpleHotbarElement, ::Editor::SerializableProbabilityHotbarElement>
    baseSnapshotFrom() const /*override*/;

    virtual bool operator==(::Editor::HotbarElementBase const&) const /*override*/;
    // NOLINTEND
};

} // namespace Editor
