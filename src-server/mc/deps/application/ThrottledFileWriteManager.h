#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class SceneFactory;
// clang-format on

class ThrottledFileWriteManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ThrottledFileWriteManager inner types declare
    // clang-format off
    struct TelemetryOperationInProgress;
    struct TransactionContext;
    // clang-format on
    
    // ThrottledFileWriteManager inner types define
    struct TransactionContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnkf643c2;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        TransactionContext& operator=(TransactionContext const&);
        TransactionContext(TransactionContext const&);
        TransactionContext();
    
    };
    
    struct TelemetryOperationInProgress {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk93e644;
        ::ll::UntypedStorage<8, 24> mUnk1def4a;
        ::ll::UntypedStorage<8, 8> mUnk140c91;
        ::ll::UntypedStorage<8, 32> mUnk3c75be;
        ::ll::UntypedStorage<8, 8> mUnkbadea1;
        ::ll::UntypedStorage<8, 8> mUnk62addd;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        TelemetryOperationInProgress& operator=(TelemetryOperationInProgress const&);
        TelemetryOperationInProgress(TelemetryOperationInProgress const&);
        TelemetryOperationInProgress();
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkd281ed;
    ::ll::UntypedStorage<8, 24> mUnke02764;
    ::ll::UntypedStorage<8, 64> mUnk28549e;
    ::ll::UntypedStorage<8, 80> mUnk216fd4;
    ::ll::UntypedStorage<8, 8> mUnkf4be0b;
    ::ll::UntypedStorage<8, 16> mUnk20fc64;
    ::ll::UntypedStorage<8, 8> mUnk74a68c;
    ::ll::UntypedStorage<8, 8> mUnkf08947;
    ::ll::UntypedStorage<8, 8> mUnka22de7;
    ::ll::UntypedStorage<8, 8> mUnk463ebb;
    // NOLINTEND

public:
    // prevent constructor by default
    ThrottledFileWriteManager& operator=(ThrottledFileWriteManager const&);
    ThrottledFileWriteManager(ThrottledFileWriteManager const&);
    ThrottledFileWriteManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ThrottledFileWriteManager() /*override*/ = default;
    // NOLINTEND

};
