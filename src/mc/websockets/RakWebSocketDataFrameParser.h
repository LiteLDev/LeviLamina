#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/websockets/CloseStatusCode.h"

// auto generated forward declare list
// clang-format off
class RakWebSocketDataFrame;
namespace RakNet { class BitStream; }
// clang-format on

class RakWebSocketDataFrameParser {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkf9f17c;
    ::ll::UntypedStorage<8, 16> mUnk860b01;
    ::ll::UntypedStorage<8, 64> mUnk3a8e04;
    ::ll::UntypedStorage<1, 1>  mUnk9b171a;
    ::ll::UntypedStorage<4, 4>  mUnkc8951a;
    // NOLINTEND

public:
    // prevent constructor by default
    RakWebSocketDataFrameParser& operator=(RakWebSocketDataFrameParser const&);
    RakWebSocketDataFrameParser(RakWebSocketDataFrameParser const&);
    RakWebSocketDataFrameParser();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RakWebSocketDataFrameParser(bool parseServerFrame);

    MCAPI ::std::shared_ptr<::RakWebSocketDataFrame> _failReadFrame(::std::string const& error, ::CloseStatusCode code);

    MCAPI ::std::shared_ptr<::RakWebSocketDataFrame> readFrame(::RakNet::BitStream& data);

    MCAPI void setOnFailHandler(::std::function<void(::std::string const&, ::CloseStatusCode)> handler);

    MCAPI ~RakWebSocketDataFrameParser();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(bool parseServerFrame);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
