#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class TransactionFrameSourceTarget {

public:
    // prevent constructor by default
    TransactionFrameSourceTarget& operator=(TransactionFrameSourceTarget const&) = delete;
    TransactionFrameSourceTarget(TransactionFrameSourceTarget const&)            = delete;
    TransactionFrameSourceTarget()                                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?exec\@TransactionFrameSourceTarget\@Core\@\@SA?AVResult\@2\@AEBVPath\@2\@0V?$function\@$$A6A?AVResult\@Core\@\@AEAVTransactionFrameSourceTarget\@2\@\@Z\@std\@\@1\@Z
     */
    MCAPI static class Core::Result
    exec(class Core::Path const&, class Core::Path const&, std::function<class Core::Result(class Core::TransactionFrameSourceTarget&)>, std::function<class Core::Result(class Core::TransactionFrameSourceTarget&)>);
    /**
     * @symbol ??1TransactionFrameSourceTarget\@Core\@\@QEAA\@XZ
     */
    MCAPI ~TransactionFrameSourceTarget();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ??0TransactionFrameSourceTarget\@Core\@\@AEAA\@AEBVPath\@1\@0\@Z
     */
    MCAPI TransactionFrameSourceTarget(class Core::Path const&, class Core::Path const&);
    // NOLINTEND
};

}; // namespace Core
