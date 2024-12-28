#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/list_base_hook.h"
#include "mc/deps/core/file/FileSizePresetToken.h"

namespace Core {

class FileSizePresetTokenImpl : public ::Core::FileSizePresetToken, public ::Bedrock::Intrusive::list_base_hook<void> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>   mUnk43aab0;
    ::ll::UntypedStorage<1, 1024> mUnkbc126d;
    ::ll::UntypedStorage<8, 16>   mUnk89993c;
    ::ll::UntypedStorage<8, 8>    mUnke35968;
    // NOLINTEND

public:
    // prevent constructor by default
    FileSizePresetTokenImpl& operator=(FileSizePresetTokenImpl const&);
    FileSizePresetTokenImpl(FileSizePresetTokenImpl const&);
    FileSizePresetTokenImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FileSizePresetTokenImpl() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
