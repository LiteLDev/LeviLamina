#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace JsonRpc { class JsonRpcError; }
// clang-format on

namespace JsonRpc {

class IObserver {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IObserver() = default;

    virtual void onJsonRpcSent(::std::string_view method, ::std::string_view messageId) = 0;

    virtual void onJsonRpcReceived(::std::string_view method, ::Json::Value const& messageId) = 0;

    virtual void onJsonRpcResultAccepted(::std::string const& messageId) = 0;

    virtual void onJsonRpcResultErrored(::std::string const& messageId, ::JsonRpc::JsonRpcError const& error) = 0;
    // NOLINTEND
};

} // namespace JsonRpc
