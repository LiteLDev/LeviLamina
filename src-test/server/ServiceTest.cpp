#include "gtest/gtest.h"

#include <functional>
#include <memory>
#include <string_view>
#include <vector>

#include "ll/api/service/Service.h"
#include "ll/api/service/ServiceManager.h"
#include "mc/deps/core/utility/optional_ref.h"

using namespace ll;
using namespace ll::service;

namespace {

// 把每个测试注册过的 service 限定在当前用例内。
// ServiceManager 是进程级单例，如果不主动清理，
// 前一个测试残留的注册状态会污染后一个测试，导致结果依赖执行顺序。
class ServiceCleanupGuard {
public:
    explicit ServiceCleanupGuard(ServiceManager& sm) : mServiceManager(sm) {}

    ~ServiceCleanupGuard() {
        for (auto it = mIds.rbegin(); it != mIds.rend(); ++it) {
            mServiceManager.unregisterService(*it);
        }
    }

    void track(ServiceIdView id) { mIds.emplace_back(id); }

private:
    ServiceManager&        mServiceManager;
    std::vector<ServiceId> mIds;
};

// 用来验证最基础生命周期语义的最小 service：
// 注册、订阅回调触发、按类型查询、注销，以及注销时是否调用 invalidate()。
class SimpleService : public ServiceImpl<SimpleService, 0> {
public:
    SimpleService()           = default;
    ~SimpleService() override = default;

    void invalidate() override { invalidated = true; }

    bool invalidated = false;
};

// 下面几个版本化 service 包装的真实后端。
// 测试重点是“同一个后端能否挂出多个 service 版本”，
class BasicMathApi {
public:
    struct Impl {
        int baseBias = 0;
    };

    std::unique_ptr<Impl> mImpl = std::make_unique<Impl>();

    BasicMathApi()  = default;
    ~BasicMathApi() = default;

    static BasicMathApi& getInstance() {
        static BasicMathApi api;
        return api;
    }

    [[nodiscard]] int add(int a, int b) const { return a + b; }
    [[nodiscard]] int multiply(int a, int b) const { return a * b; }
    [[nodiscard]] int addWithBias(int a, int b, int bias) const { return a + b + bias + mImpl->baseBias; }
};

// V0 和 V1 故意合并成一个模板实现。
// 这个测试真正关心的是 ServiceManager 现在按 (name, version) 做索引，
// 所以 ABI 兼容的几个版本即使共用一套包装实现，也仍然可以作为不同版本分别注册。
// 也就是说，这个例子侧重“版本化注册行为”，不是在头文件层面精确模拟“新增了哪些接口”。
template <size_t version>
    requires(version == 0 || version == 1)
class BasicMathServiceV0_V1 : public ServiceImpl<BasicMathApi, version> {
public:
    bool        invalidated{false};
    void        invalidate() override { invalidated = true; }
    virtual int add(int a, int b) { return BasicMathApi::getInstance().add(a, b); }
    virtual int multiply(int a, int b) { return BasicMathApi::getInstance().multiply(a, b); }
};

using BasicMathServiceV0 = BasicMathServiceV0_V1<0>;
using BasicMathServiceV1 = BasicMathServiceV0_V1<1>;

// V2 表示一次 ABI 不兼容变更：
// add() 的签名变了，所以不能再和 V0/V1 共用同一套包装形状。
class BasicMathServiceV2 : public ServiceImpl<BasicMathApi, 2> {
public:
    bool        invalidated{false};
    void        invalidate() override { invalidated = true; }
    virtual int add(int a, int b, int bias) { return BasicMathApi::getInstance().addWithBias(a, b, bias); }
    virtual int multiply(int a, int b) { return BasicMathApi::getInstance().multiply(a, b); }
};

} // namespace

TEST(ServiceTest, ServiceManagerPublishesRegisterAndUnregisterLifecycle) {
    // 这个用例验证：即使引入了“同名多版本共存”，
    // 旧的“单个 service 的基础生命周期”语义也不能退化。
    auto                service = std::make_shared<SimpleService>();
    auto&               sm      = ServiceManager::getInstance();
    ServiceCleanupGuard cleanup(sm);
    cleanup.track(service->getServiceId());

    std::shared_ptr<SimpleService> observedService;
    // subscribeService() 在 service 注册时应当立刻收到当前实例，
    // 在 service 被移除时则应当收到 nullptr。
    auto listener = sm.subscribeService<SimpleService>([&](std::shared_ptr<SimpleService> const& currentService) {
        observedService = currentService;
    });

    // 注册成功，并且监听器拿到的就是同一个对象实例。
    EXPECT_TRUE(sm.registerService(service, nullptr));
    ASSERT_NE(observedService, nullptr);
    EXPECT_EQ(observedService.get(), service.get());

    // 按类型查询仍然应该精确拿到已注册实例。
    auto queriedService = sm.getService<SimpleService>();
    ASSERT_TRUE(queriedService.has_value());
    EXPECT_EQ(queriedService.value().get(), service.get());

    // 注销时需要同时验证三件事：
    // 1. manager 内部不再持有该 service
    // 2. service 自身的 invalidate() 被调用
    // 3. 订阅者收到 nullptr，表示该 service 已下线
    EXPECT_TRUE(sm.unregisterService(service->getServiceId()));
    EXPECT_TRUE(service->invalidated);
    EXPECT_EQ(observedService, nullptr);
    EXPECT_FALSE(sm.getService<SimpleService>().has_value());

    event::EventBus::getInstance().removeListener(listener);
}

TEST(ServiceTest, ServiceManagerSupportsMultipleVersionsWithSameName) {
    // 三个包装类型使用同一个逻辑 service 名称，但版本不同。
    // 这是这次改动最核心的回归测试：
    // 注册 V1/V2 时，不能再像旧实现那样把 V0 顶掉或覆盖掉。
    auto                serviceName = getServiceId<BasicMathServiceV0>.name;
    auto&               sm          = ServiceManager::getInstance();
    ServiceCleanupGuard cleanup(sm);

    auto v0 = std::make_shared<BasicMathServiceV0>();
    auto v1 = std::make_shared<BasicMathServiceV1>();
    auto v2 = std::make_shared<BasicMathServiceV2>();

    cleanup.track(BasicMathServiceV0::ServiceId);
    cleanup.track(BasicMathServiceV1::ServiceId);
    cleanup.track(BasicMathServiceV2::ServiceId);

    // 同名不同版本应当允许共存。
    // 只有完全重复的注册（同名且同版本）才应该失败。
    EXPECT_TRUE(sm.registerService(v0, nullptr));
    EXPECT_TRUE(sm.registerService(v1, nullptr));
    EXPECT_TRUE(sm.registerService(v2, nullptr));
    EXPECT_FALSE(sm.registerService(std::make_shared<BasicMathServiceV0>(), nullptr));

    // 按类型查询必须是精确匹配：
    // 取 V0/V1/V2 时，返回的都必须是对应版本，而不是“最新版”或者“随便一个兼容版本”。
    auto queriedV0 = sm.getService<BasicMathServiceV0>();
    auto queriedV1 = sm.getService<BasicMathServiceV1>();
    auto queriedV2 = sm.getService<BasicMathServiceV2>();

    ASSERT_TRUE(queriedV0.has_value());
    ASSERT_TRUE(queriedV1.has_value());
    ASSERT_TRUE(queriedV2.has_value());

    // 顺手做一层行为确认，确保三个版本各自真的可调用。
    // 这里 V0/V1 共用一套转发实现；
    // V2 则通过不同的 add() 签名来代表 ABI 已经变化。
    EXPECT_EQ((*queriedV0)->add(2, 3), 5);
    EXPECT_EQ((*queriedV1)->add(2, 3), 5);
    EXPECT_EQ((*queriedV1)->multiply(2, 3), 6);
    EXPECT_EQ((*queriedV2)->add(2, 3, 4), 9);
    EXPECT_EQ((*queriedV2)->multiply(2, 3), 6);

    // queryService(name) 是偏兼容接口的查询：
    // 它回答的是“这个逻辑 service 名下，目前注册的最高版本是什么”。
    auto latest = sm.queryService(serviceName);
    ASSERT_TRUE(latest.has_value());
    EXPECT_EQ(latest->name, serviceName);
    EXPECT_EQ(latest->version, 2u);
    EXPECT_EQ(latest->modName, "");
    EXPECT_EQ(latest->service.get(), v2.get());

    // queryServices(name) 则暴露完整版本集合，
    // 并且结果应按版本号排序，方便做诊断、展示或显式选择兼容版本。
    auto allVersions = sm.queryServices(serviceName);
    ASSERT_EQ(allVersions.size(), 3u);
    EXPECT_EQ(allVersions[0].version, 0u);
    EXPECT_EQ(allVersions[1].version, 1u);
    EXPECT_EQ(allVersions[2].version, 2u);
    EXPECT_EQ(allVersions[0].service.get(), v0.get());
    EXPECT_EQ(allVersions[1].service.get(), v1.get());
    EXPECT_EQ(allVersions[2].service.get(), v2.get());

    // 当 service 名存在，但请求的版本不存在时，
    // 不能伪装成“完全不存在”，而应返回 VersionMismatch，
    // 并把当前可见的最高版本带出来。
    auto missingVersion = sm.getService(ServiceIdView{serviceName, 99});
    ASSERT_FALSE(missingVersion.has_value());
    ASSERT_TRUE(missingVersion.error().isA<GetServiceError>());
    EXPECT_EQ(missingVersion.error().as<GetServiceError>().code, GetServiceError::VersionMismatch);
    EXPECT_EQ(missingVersion.error().as<GetServiceError>().version, 2u);

    // 名字本身就不存在时，才是真正的 NotExist。
    auto missingName = sm.getService(ServiceIdView{"test.service.missing", 0});
    ASSERT_FALSE(missingName.has_value());
    ASSERT_TRUE(missingName.error().isA<GetServiceError>());
    EXPECT_EQ(missingName.error().as<GetServiceError>().code, GetServiceError::NotExist);

    // 移除某一个版本时，其他同名版本不能被连带影响。
    // 这正是从“按 name 唯一”切到“按 (name, version) 唯一”后的关键行为差异。
    EXPECT_TRUE(sm.unregisterService(BasicMathServiceV1::ServiceId));
    EXPECT_TRUE(v1->invalidated);
    EXPECT_TRUE(sm.getService<BasicMathServiceV0>().has_value());
    EXPECT_TRUE(sm.getService<BasicMathServiceV2>().has_value());

    // V1 被移除后，再请求 V1 应当体现为：
    // 这个逻辑 service 还存在，但你要的那个版本已经不存在了。
    auto removedV1 = sm.getService<BasicMathServiceV1>();
    ASSERT_FALSE(removedV1.has_value());
    ASSERT_TRUE(removedV1.error().isA<GetServiceError>());
    EXPECT_EQ(removedV1.error().as<GetServiceError>().code, GetServiceError::VersionMismatch);
    EXPECT_EQ(removedV1.error().as<GetServiceError>().version, 2u);

    // 名字索引里的版本集合也应该同步更新，只剩下 V0 和 V2。
    auto remainingVersions = sm.queryServices(serviceName);
    ASSERT_EQ(remainingVersions.size(), 2u);
    EXPECT_EQ(remainingVersions[0].version, 0u);
    EXPECT_EQ(remainingVersions[1].version, 2u);

    // 全部版本都移除后，无论是“查最新版本”还是“查完整版本列表”，都应当为空。
    EXPECT_TRUE(sm.unregisterService(BasicMathServiceV0::ServiceId));
    EXPECT_TRUE(sm.unregisterService(BasicMathServiceV2::ServiceId));
    EXPECT_TRUE(v0->invalidated);
    EXPECT_TRUE(v2->invalidated);
    EXPECT_FALSE(sm.queryService(serviceName).has_value());
    EXPECT_TRUE(sm.queryServices(serviceName).empty());
}
