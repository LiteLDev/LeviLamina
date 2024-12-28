#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/websockets/OpCode.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
// clang-format on

class RakWebSocketDataFrame {
public:
    // RakWebSocketDataFrame inner types define
    enum class ParseState : int {
        AwaitingHeader    = 0,
        PayloadLengthEx   = 1,
        PayloadMaskingKey = 2,
        PayloadClosing    = 3,
        Payload           = 4,
        Done              = 5,
        Abort             = 6,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>   mUnk61d632;
    ::ll::UntypedStorage<8, 288> mUnk892763;
    ::ll::UntypedStorage<8, 8>   mUnk998e6c;
    ::ll::UntypedStorage<4, 4>   mUnk670dec;
    ::ll::UntypedStorage<2, 2>   mUnk2f8588;
    ::ll::UntypedStorage<1, 1>   mUnk380434;
    ::ll::UntypedStorage<1, 1>   mUnkf19b36;
    ::ll::UntypedStorage<1, 1>   mUnk22558c;
    ::ll::UntypedStorage<4, 4>   mUnk226a4a;
    // NOLINTEND

public:
    // prevent constructor by default
    RakWebSocketDataFrame& operator=(RakWebSocketDataFrame const&);
    RakWebSocketDataFrame(RakWebSocketDataFrame const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RakWebSocketDataFrame();

    MCAPI ~RakWebSocketDataFrame();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _isContinuation(uchar opCode);

    MCAPI static bool _isControl(uchar opCode);

    MCAPI static bool _isNonControl(uchar opCode);

    MCAPI static bool _isUnsupported(uchar opCode);

    MCAPI static void _maskUnmaskData(uchar* payload, uint size, uint maskingIndexOffset, uint mask);

    MCAPI static void writeFrameToStream(
        ::RakNet::BitStream& stream,
        uchar const*         payload,
        uint                 size,
        ::OpCode             opCode,
        bool                 isFin,
        uint                 maskKey
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
