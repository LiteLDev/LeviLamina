#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/NoteBlockInstrument.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct InstrumentComponent {
public:
    // InstrumentComponent inner types define
    using InstrumentMappingsDataType =
        ::std::unordered_map<::std::string, ::SharedTypes::v1_26_20::NoteBlockInstrument>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 4, ::std::array<::std::optional<::SharedTypes::v1_26_20::NoteBlockInstrument>, 2>>
        mInstruments;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NameId();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
