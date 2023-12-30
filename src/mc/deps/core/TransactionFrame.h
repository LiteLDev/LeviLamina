#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/FileAccessType.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class TransactionFrame {
public:
    // prevent constructor by default
    TransactionFrame& operator=(TransactionFrame const&);
    TransactionFrame(TransactionFrame const&);
    TransactionFrame();

public:
    // NOLINTBEGIN
    // symbol: ??1TransactionFrame@Core@@QEAA@XZ
    MCAPI ~TransactionFrame();

    // symbol:
    // ?exec@TransactionFrame@Core@@SA?AVResult@2@W4FileAccessType@2@AEBVPath@2@AEBV?$function@$$A6A?AVResult@Core@@AEAVTransactionFrame@2@@Z@std@@@Z
    MCAPI static class Core::Result exec(
        enum Core::FileAccessType                                               accessType,
        class Core::Path const&                                                 path,
        std::function<class Core::Result(class Core::TransactionFrame&)> const& fx
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ??0TransactionFrame@Core@@AEAA@W4FileAccessType@1@AEBVPath@1@@Z
    MCAPI TransactionFrame(enum Core::FileAccessType accessType, class Core::Path const& path);

    // NOLINTEND
};

}; // namespace Core
