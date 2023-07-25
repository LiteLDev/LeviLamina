#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class TransactionFrameSourceTarget {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CORE_TRANSACTIONFRAMESOURCETARGET
public:
    TransactionFrameSourceTarget& operator=(TransactionFrameSourceTarget const&) = delete;
    TransactionFrameSourceTarget(TransactionFrameSourceTarget const&)            = delete;
    TransactionFrameSourceTarget()                                               = delete;
#endif

public:
    /**
     * @symbol ??1TransactionFrameSourceTarget\@Core\@\@QEAA\@XZ
     */
    MCAPI ~TransactionFrameSourceTarget();
    /**
     * @symbol
     * ?exec\@TransactionFrameSourceTarget\@Core\@\@SA?AVResult\@2\@AEBVPath\@2\@0V?$function\@$$A6A?AVResult\@Core\@\@AEAVTransactionFrameSourceTarget\@2\@\@Z\@std\@\@1\@Z
     */
    MCAPI static class Core::Result
    exec(class Core::Path const&, class Core::Path const&, class std::function<class Core::Result(class Core::TransactionFrameSourceTarget&)>, class std::function<class Core::Result(class Core::TransactionFrameSourceTarget&)>);

    // private:
    /**
     * @symbol ??0TransactionFrameSourceTarget\@Core\@\@AEAA\@AEBVPath\@1\@0\@Z
     */
    MCAPI TransactionFrameSourceTarget(class Core::Path const&, class Core::Path const&);

private:
};

}; // namespace Core
