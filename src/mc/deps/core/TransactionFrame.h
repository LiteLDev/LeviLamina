#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Core { class Result; }
namespace Core { enum class FileAccessType; }
// clang-format on

namespace Core {

class TransactionFrame {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CORE_TRANSACTIONFRAME
public:
    TransactionFrame& operator=(TransactionFrame const&) = delete;
    TransactionFrame(TransactionFrame const&)            = delete;
    TransactionFrame()                                   = delete;
#endif

public:
    /**
     * @symbol ??1TransactionFrame\@Core\@\@QEAA\@XZ
     */
    MCAPI ~TransactionFrame();
    /**
     * @symbol
     * ?exec\@TransactionFrame\@Core\@\@SA?AVResult\@2\@W4FileAccessType\@2\@AEBVPath\@2\@AEBV?$function\@$$A6A?AVResult\@Core\@\@AEAVTransactionFrame\@2\@\@Z\@std\@\@\@Z
     */
    MCAPI static class Core::Result
    exec(enum class Core::FileAccessType, class Core::Path const&, class std::function<class Core::Result(class Core::TransactionFrame&)> const&);

    // private:
    /**
     * @symbol ??0TransactionFrame\@Core\@\@AEAA\@W4FileAccessType\@1\@AEBVPath\@1\@\@Z
     */
    MCAPI TransactionFrame(enum class Core::FileAccessType, class Core::Path const&);

private:
};

}; // namespace Core
