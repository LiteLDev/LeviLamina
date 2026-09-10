#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/Generator.h"
#include "mc/common/editor/IOperation.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class CompoundTag;
class Level;
namespace Editor { class ServiceProviderCollection; }
namespace Editor { struct CoroutineStatus; }
namespace Editor::Transactions { struct BlockChangeIntentData; }
// clang-format on

namespace Editor::Transactions {

class BlockChangedOperation : public ::Editor::Transactions::IOperation {
public:
    // BlockChangedOperation inner types declare
    // clang-format off
    struct ActiveProcessData;
    // clang-format on

    // BlockChangedOperation inner types define
    struct ActiveProcessData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>   mUnk6c60a0;
        ::ll::UntypedStorage<8, 8>   mUnk12eb90;
        ::ll::UntypedStorage<8, 8>   mUnk9b780d;
        ::ll::UntypedStorage<4, 4>   mUnk881cb9;
        ::ll::UntypedStorage<8, 8>   mUnka26eab;
        ::ll::UntypedStorage<8, 8>   mUnkca0473;
        ::ll::UntypedStorage<8, 8>   mUnke42f4f;
        ::ll::UntypedStorage<8, 16>  mUnk3f28df;
        ::ll::UntypedStorage<8, 16>  mUnkc02d8d;
        ::ll::UntypedStorage<8, 16>  mUnk78108e;
        ::ll::UntypedStorage<8, 224> mUnkda3c58;
        // NOLINTEND

    public:
        // prevent constructor by default
        ActiveProcessData& operator=(ActiveProcessData const&);
        ActiveProcessData(ActiveProcessData const&);
        ActiveProcessData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk4da484;
    ::ll::UntypedStorage<8, 8>  mUnk228eec;
    ::ll::UntypedStorage<8, 8>  mUnk127d01;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockChangedOperation& operator=(BlockChangedOperation const&);
    BlockChangedOperation(BlockChangedOperation const&);
    BlockChangedOperation();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockChangedOperation() /*override*/ = default;

    virtual ::std::string_view getName() /*override*/;

    virtual ::Scripting::Result_deprecated<void>
    _processUndo(::Editor::ServiceProviderCollection& services) /*override*/;

    virtual ::Scripting::Result_deprecated<void>
    _processRedo(::Editor::ServiceProviderCollection& services) /*override*/;

    virtual ::Editor::Transactions::IOperation::ProcessingState _getProcessingState() const /*override*/;

    virtual ::Scripting::Result_deprecated<void> _clearActiveProcess() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void>
    _performOperation(::Editor::ServiceProviderCollection& services, bool isUndo);

    MCNAPI ::Scripting::Result_deprecated<void> _setBlock(
        ::Level&          level,
        ::BlockSource&    region,
        uint const&       blockToPlace,
        uint const&       extraBlockToPlace,
        ::CompoundTag*    blockData,
        ::BlockPos const& pos
    ) const;

    MCNAPI ::Scripting::Result_deprecated<void>
    _setBlocks(::Level& level, ::BlockSource& region, bool isUndo, uint64 startIndex, uint64 count) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::vector<::Editor::Transactions::BlockChangeIntentData>
    createBlockChangeIntentFromLocation(::BlockSource const& region, ::BlockPos const& pos, bool includeAll);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& DEFAULT_OPERATION_NAME();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string_view $getName();

    MCNAPI ::Scripting::Result_deprecated<void> $_processUndo(::Editor::ServiceProviderCollection& services);

    MCNAPI ::Scripting::Result_deprecated<void> $_processRedo(::Editor::ServiceProviderCollection& services);

    MCNAPI ::Editor::Transactions::IOperation::ProcessingState $_getProcessingState() const;

    MCNAPI ::Scripting::Result_deprecated<void> $_clearActiveProcess();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Transactions
