#ifndef SRC_HISTOGRAM_H_
#define SRC_HISTOGRAM_H_

#if defined(NODE_WANT_INTERNALS) && NODE_WANT_INTERNALS

#include "hdr_histogram.h"
#include "base_object.h"
#include "memory_tracker.h"
#include "node_messaging.h"
#include "util.h"
#include "v8.h"
#include "uv.h"

#include <functional>
#include <limits>
#include <map>
#include <string>

namespace node {

class ExternalReferenceRegistry;

constexpr int kDefaultHistogramFigures = 3;

class Histogram : public MemoryRetainer {
 public:
  struct Options {
    int64_t lowest = 1;
    int64_t highest = std::numeric_limits<int64_t>::max();
    int figures = kDefaultHistogramFigures;
  };

  explicit Histogram(const Options& options);
  virtual ~Histogram() = default;

  inline bool Record(int64_t value);
  inline void Reset();
  inline int64_t Min() const;
  inline int64_t Max() const;
  inline double Mean() const;
  inline double Stddev() const;
  inline int64_t Percentile(double percentile) const;
  inline size_t Exceeds() const { return exceeds_; }
  inline size_t Count() const;

  inline uint64_t RecordDelta();

  inline double Add(const Histogram& other);

  // Iterator is a function type that takes two doubles as argument, one for
  // percentile and one for the value at that percentile.
  template <typename Iterator>
  inline void Percentiles(Iterator&& fn);

  inline size_t GetMemorySize() const;

  void MemoryInfo(MemoryTracker* tracker) const override;
  SET_MEMORY_INFO_NAME(Histogram)
  SET_SELF_SIZE(Histogram)

 private:
  using HistogramPointer = DeleteFnPtr<hdr_histogram, hdr_close>;
  HistogramPointer histogram_;
  uint64_t prev_ = 0;
  size_t exceeds_ = 0;
  size_t count_ = 0;
  Mutex mutex_;
};

class HistogramImpl {
 public:
  explicit HistogramImpl(
      const Histogram::Options& options = Histogram::Options {});
  explicit HistogramImpl(std::shared_ptr<Histogram> histogram);

  Histogram* operator->() { return histogram_.get(); }

  const std::shared_ptr<Histogram>& histogram() const { return histogram_; }

 private:
  std::shared_ptr<Histogram> histogram_;
};

class HistogramBase : public BaseObject, public HistogramImpl {
 public:
  static v8::Local<v8::FunctionTemplate> GetConstructorTemplate(
    Environment* env);
  static void Initialize(Environment* env, v8::Local<v8::Object> target);
  static void RegisterExternalReferences(ExternalReferenceRegistry* registry);

  static BaseObjectPtr<HistogramBase> Create(
      Environment* env,
      const Histogram::Options& options = Histogram::Options {});

  static BaseObjectPtr<HistogramBase> Create(
      Environment* env,
      std::shared_ptr<Histogram> histogram);

  static void New(const v8::FunctionCallbackInfo<v8::Value>& args);

  void MemoryInfo(MemoryTracker* tracker) const override;
  SET_MEMORY_INFO_NAME(HistogramBase)
  SET_SELF_SIZE(HistogramBase)

  static void GetCountBigInt(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void GetMinBigInt(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void GetMaxBigInt(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void GetExceedsBigInt(const v8::FunctionCallbackInfo<v8::Value>& args);

  static void GetCount(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void GetMin(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void GetMax(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void GetMean(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void GetExceeds(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void GetStddev(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void GetPercentile(
      const v8::FunctionCallbackInfo<v8::Value>& args);
  static void GetPercentileBigInt(
      const v8::FunctionCallbackInfo<v8::Value>& args);
  static void GetPercentiles(
      const v8::FunctionCallbackInfo<v8::Value>& args);
  static void GetPercentilesBigInt(
      const v8::FunctionCallbackInfo<v8::Value>& args);
  static void DoReset(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void Record(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void RecordDelta(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void Add(const v8::FunctionCallbackInfo<v8::Value>& args);

  HistogramBase(
      Environment* env,
      v8::Local<v8::Object> wrap,
      const Histogram::Options& options = Histogram::Options {});

  HistogramBase(
      Environment* env,
      v8::Local<v8::Object> wrap,
      std::shared_ptr<Histogram> histogram);

  TransferMode GetTransferMode() const override {
    return TransferMode::kCloneable;
  }
  std::unique_ptr<worker::TransferData> CloneForMessaging() const override;

  class HistogramTransferData : public worker::TransferData {
   public:
    explicit HistogramTransferData(const HistogramBase* histogram)
        : histogram_(histogram->histogram()) {}

    explicit HistogramTransferData(std::shared_ptr<Histogram> histogram)
        : histogram_(std::move(histogram)) {}

    BaseObjectPtr<BaseObject> Deserialize(
        Environment* env,
        v8::Local<v8::Context> context,
        std::unique_ptr<worker::TransferData> self) override;

    void MemoryInfo(MemoryTracker* tracker) const override;
    SET_MEMORY_INFO_NAME(HistogramTransferData)
    SET_SELF_SIZE(HistogramTransferData)

   private:
    std::shared_ptr<Histogram> histogram_;
  };
};

class IntervalHistogram : public HandleWrap, public HistogramImpl {
 public:
  enum class StartFlags {
    NONE,
    RESET
  };

  static void RegisterExternalReferences(ExternalReferenceRegistry* registry);

  static v8::Local<v8::FunctionTemplate> GetConstructorTemplate(
      Environment* env);

  static BaseObjectPtr<IntervalHistogram> Create(
      Environment* env,
      int32_t interval,
      std::function<void(Histogram&)> on_interval,
      const Histogram::Options& options);

  IntervalHistogram(
      Environment* env,
      v8::Local<v8::Object> wrap,
      AsyncWrap::ProviderType type,
      int32_t interval,
      std::function<void(Histogram&)> on_interval,
      const Histogram::Options& options = Histogram::Options {});

  static void GetCountBigInt(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void GetMinBigInt(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void GetMaxBigInt(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void GetExceedsBigInt(const v8::FunctionCallbackInfo<v8::Value>& args);

  static void GetCount(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void GetMin(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void GetMax(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void GetMean(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void GetExceeds(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void GetStddev(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void GetPercentile(
      const v8::FunctionCallbackInfo<v8::Value>& args);
  static void GetPercentileBigInt(
      const v8::FunctionCallbackInfo<v8::Value>& args);
  static void GetPercentiles(
      const v8::FunctionCallbackInfo<v8::Value>& args);
  static void GetPercentilesBigInt(
      const v8::FunctionCallbackInfo<v8::Value>& args);
  static void DoReset(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void Start(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void Stop(const v8::FunctionCallbackInfo<v8::Value>& args);

  TransferMode GetTransferMode() const override {
    return TransferMode::kCloneable;
  }
  std::unique_ptr<worker::TransferData> CloneForMessaging() const override;

  void MemoryInfo(MemoryTracker* tracker) const override;
  SET_MEMORY_INFO_NAME(IntervalHistogram)
  SET_SELF_SIZE(IntervalHistogram)

 private:
  static void TimerCB(uv_timer_t* handle);
  void OnStart(StartFlags flags = StartFlags::RESET);
  void OnStop();

  bool enabled_ = false;
  int32_t interval_ = 0;
  std::function<void(Histogram&)> on_interval_;
  uv_timer_t timer_;
};

}  // namespace node

#endif  // defined(NODE_WANT_INTERNALS) && NODE_WANT_INTERNALS

#endif  // SRC_HISTOGRAM_H_
