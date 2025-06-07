#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BaseBlockLocationIterator.h"

// auto generated forward declare list
// clang-format off
class SimpleBlockVolume;
namespace Editor { class RelativeVolumeListBlockVolume; }
// clang-format on

namespace Editor {

class RelativeVolumeListBlockVolumeIterator : public ::BaseBlockLocationIterator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk82407f;
    ::ll::UntypedStorage<8, 8>  mUnk565035;
    ::ll::UntypedStorage<8, 8>  mUnk56686a;
    ::ll::UntypedStorage<8, 8>  mUnk1aedac;
    ::ll::UntypedStorage<8, 8>  mUnk7c50b4;
    ::ll::UntypedStorage<4, 12> mUnk6fb7da;
    // NOLINTEND

public:
    // prevent constructor by default
    RelativeVolumeListBlockVolumeIterator& operator=(RelativeVolumeListBlockVolumeIterator const&);
    RelativeVolumeListBlockVolumeIterator(RelativeVolumeListBlockVolumeIterator const&);
    RelativeVolumeListBlockVolumeIterator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RelativeVolumeListBlockVolumeIterator() /*override*/ = default;

    // vIndex: 4
    virtual bool isValid() const /*override*/;

    // vIndex: 1
    virtual bool operator==(::BaseBlockLocationIterator const& rhs) const /*override*/;

    // vIndex: 2
    virtual bool operator!=(::BaseBlockLocationIterator const& rhs) const /*override*/;

    // vIndex: 5
    virtual void _begin() /*override*/;

    // vIndex: 6
    virtual void _end() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RelativeVolumeListBlockVolumeIterator(
        ::Editor::RelativeVolumeListBlockVolume const& volume,
        ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<::SimpleBlockVolume>>>
            currentVolumeIterator,
        ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<::SimpleBlockVolume>>> endVolumeIterator,
        bool                                                                                         begin
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Editor::RelativeVolumeListBlockVolume const& volume,
        ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<::SimpleBlockVolume>>>
            currentVolumeIterator,
        ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<::SimpleBlockVolume>>> endVolumeIterator,
        bool                                                                                         begin
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isValid() const;

    MCNAPI void $_begin();

    MCNAPI void $_end();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor
