#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/deps/core/common/bedrock/ThreadOwner.h"
#include "mc/deps/core/math/Random.h"
#include "mc/math/IRandom.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/ThreadLocalObject.h"

class Random : public IRandom, public Bedrock::EnableNonOwnerReferences {

public:
    Bedrock::Application::ThreadOwner<Core::Random> mRandom; // this+0x20

    // prevent constructor by default
    Random& operator=(Random const&) = delete;
    Random(Random const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_destructor_-1
     */
    virtual ~Random();
    /**
     * @vftbl 1
     * @symbol ?nextInt\@Random\@\@UEAAHXZ
     */
    virtual int nextInt();
    /**
     * @vftbl 2
     * @symbol ?nextInt\@Random\@\@UEAAHH\@Z
     */
    virtual int nextInt(int);
    /**
     * @vftbl 3
     * @symbol ?nextLong\@Random\@\@UEAA_JXZ
     */
    virtual int64_t nextLong();
    /**
     * @vftbl 4
     * @symbol ?nextBoolean\@Random\@\@UEAA_NXZ
     */
    virtual bool nextBoolean();
    /**
     * @vftbl 5
     * @symbol ?nextFloat\@Random\@\@UEAAMXZ
     */
    virtual float nextFloat();
    /**
     * @vftbl 6
     * @symbol ?nextDouble\@Random\@\@UEAANXZ
     */
    virtual double nextDouble();
    /**
     * @vftbl 7
     * @symbol ?nextGaussianDouble\@Random\@\@UEAANXZ
     */
    virtual double nextGaussianDouble();
    /**
     * @vftbl 8
     * @symbol ?consumeCount\@Random\@\@UEAAXI\@Z
     */
    virtual void consumeCount(unsigned int);
    /**
     * @vftbl 9
     * @symbol ?fork\@Random\@\@UEAA?AV?$unique_ptr\@VIRandom\@\@U?$default_delete\@VIRandom\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class IRandom> fork();
    /**
     * @symbol ??0Random\@\@QEAA\@XZ
     */
    MCAPI Random();
    /**
     * @symbol ?nextFloat\@Random\@\@QEAAMMM\@Z
     */
    MCAPI float nextFloat(float, float);
    /**
     * @symbol ?nextGaussianFloat\@Random\@\@QEAAMXZ
     */
    MCAPI float nextGaussianFloat();
    /**
     * @symbol ?nextGaussianInt\@Random\@\@QEAAHH\@Z
     */
    MCAPI int nextGaussianInt(int);
    /**
     * @symbol ?nextInt\@Random\@\@QEAAHHH\@Z
     */
    MCAPI int nextInt(int, int);
    /**
     * @symbol ?nextIntInclusive\@Random\@\@QEAAHHH\@Z
     */
    MCAPI int nextIntInclusive(int, int);
    /**
     * @symbol ?getThreadLocal\@Random\@\@SAAEAV1\@XZ
     */
    MCAPI static class Random& getThreadLocal();
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?mThreadLocalRandom\@Random\@\@0V?$ThreadLocalObject\@VRandom\@\@V?$allocator\@VRandom\@\@\@std\@\@\@Threading\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::Threading::ThreadLocalObject<class Random, std::allocator<class Random>>
        mThreadLocalRandom;
    // NOLINTEND
};
