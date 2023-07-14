#pragma once
#include <memory>
#include <type_traits>

template <typename T>
class WeakStorageSharePtr {
public:
    enum class VariadicInit : int {
        NonAmbiguous = 0,
    };
    enum class EmptyInit : int {
        NoValue = 0,
    };
    std::weak_ptr<T> mHandle;

    T* get() const {
        return mHandle.lock().get();
    }
};

template <typename T>
class OwnerStorageSharePtr {
public:
    enum class VariadicInit : int {
        NonAmbiguous = 0,
    };
    enum class EmptyInit : int {
        NoValue = 0,
    };
    std::shared_ptr<T> mHandle;

    T* get() const {
        return mHandle.get();
    }
};

template <typename T>
class StackResultStorageSharePtr {
public:
    std::shared_ptr<T> mHandle;

    T* get() const {
        return mHandle.get();
    }
};

template <typename T>
struct SharePtrRefTraits {
public:
    using StackRef = T;
    using WeakStorage = WeakStorageSharePtr<StackRef>;
    using OwnerStorage = OwnerStorageSharePtr<StackRef>;
    using OwnerStackRef = StackRef;
    using StackResultStorage = StackResultStorageSharePtr<OwnerStackRef>;
};

template <typename T>
class WeakRefT : public T::WeakStorage {};

template <typename T>
class OwnerPtrT : public T::OwnerStorage {};

template <typename T>
class StackRefResultT : public T::StackResultStorage {
public:
    using StackRef = typename T::StackRef;
};

template <typename T>
class SharedCounter {
public:
    SharedCounter(T* p = nullptr) : ptr(p), share_count(1), weak_count(0) {}

    void addShareCount() {
        share_count++;
    }

    void addWeakCount() {
        weak_count++;
    }

    int getShareCount() const {
        return share_count.load();
    }

    int getWeakCount() const {
        return weak_count.load();
    }

    T* get() const {
        return ptr;
    }

    void reset() {
        ptr = nullptr;
        share_count = 0;
        weak_count = 0;
    }

    void release() {
        if (--share_count == 0) {
            delete ptr;
            ptr = nullptr;
            releaseWeak();
        }
    }

    void releaseWeak() {
        if (--weak_count == 0) {
            delete this;
        }
    }

private:
    T* ptr;
    std::atomic<int> share_count;
    std::atomic<int> weak_count;
};

template <typename T>
class SharedPtr;

template <typename T>
class WeakPtr;

template <typename T>
class SharedPtr {
public:
    SharedPtr() : counter(nullptr) {}

    SharedPtr(T* p) : counter(new SharedCounter<T>(p)) {}

    template <class Y, std::enable_if_t<std::is_convertible_v<Y*, T*>, int> = 0>
    SharedPtr(const SharedPtr<Y>& other) {
        counter = other.counter;
        if (counter) {
            counter->addShareCount();
        }
    }

    template <class Y, std::enable_if_t<std::is_convertible_v<Y*, T*>, int> = 0>
    SharedPtr(SharedPtr<Y>&& other) {
        counter = other.counter;
        other.counter = nullptr;
    }

    template <class Y, std::enable_if_t<std::is_convertible_v<Y*, T*>, int> = 0>
    SharedPtr(const WeakPtr<Y>& other) {
        counter = other.counter;
        if (other) {
            counter->addShareCount();
        }
    }

    ~SharedPtr() {
        if (counter) {
            counter->release();
        }
    }

    template <class Y, std::enable_if_t<std::is_convertible_v<Y*, T*>, int> = 0>
    SharedPtr<T>& operator=(const SharedPtr<Y>& other) {
        if (counter != other.counter) {
            counter = other.counter;
            if (counter) {
                counter->addShareCount();
            }
        }
        return *this;
    }

    template <class Y, std::enable_if_t<std::is_convertible_v<Y*, T*>, int> = 0>
    SharedPtr<T>& operator=(SharedPtr<Y>&& other) {
        if (counter != other.counter) {
            counter = other.counter;
            other.counter = nullptr;
        }
        return *this;
    }

    template <class Y, std::enable_if_t<std::is_convertible_v<Y*, T*>, int> = 0>
    SharedPtr<T>& operator=(const WeakPtr<Y>& other) {
        counter = other.counter;
        if (other) {
            counter->addShareCount();
        }
    }

    T* operator->() const {
        return counter->get();
    }

    T* get() const {
        return counter->get();
    }

    T& operator*() const {
        return *(counter->get());
    }

    operator bool() const {
        return counter != nullptr;
    }

    int use_count() const {
        return counter ? counter->getShareCount() : 0;
    }

    void reset() {
        counter->release();
        counter = nullptr;
    }

private:
    SharedCounter<T>* counter;

    friend class WeakPtr<T>;
};

template <typename T>
class WeakPtr {
public:
    WeakPtr() : counter(nullptr) {}

    template <class Y, std::enable_if_t<std::is_convertible_v<Y*, T*>, int> = 0>
    WeakPtr(const SharedPtr<Y>& other) {
        counter = other.counter;
        if (counter) {
            counter->addWeakCount();
        }
    }

    template <class Y, std::enable_if_t<std::is_convertible_v<Y*, T*>, int> = 0>
    WeakPtr(const WeakPtr<Y>& other) {
        counter = other.counter;
        if (counter) {
            counter->addWeakCount();
        }
    }

    template <class Y, std::enable_if_t<std::is_convertible_v<Y*, T*>, int> = 0>
    WeakPtr(WeakPtr<Y>&& other) {
        counter = other.counter;
        other.counter = nullptr;
    }

    ~WeakPtr() {
        if (counter) {
            counter->releaseWeak();
        }
    }

    template <class Y, std::enable_if_t<std::is_convertible_v<Y*, T*>, int> = 0>
    WeakPtr<T>& operator=(const SharedPtr<Y>& other) {
        if (counter != other.counter) {
            counter = other.counter;
            if (counter) {
                counter->addWeakCount();
            }
        }
        return *this;
    }

    template <class Y, std::enable_if_t<std::is_convertible_v<Y*, T*>, int> = 0>
    WeakPtr<T>& operator=(const WeakPtr<Y>& other) {
        if (counter != other.counter) {
            counter = other.counter;
            if (counter) {
                counter->addWeakCount();
            }
        }
        return *this;
    }

    template <class Y, std::enable_if_t<std::is_convertible_v<Y*, T*>, int> = 0>
    WeakPtr<T>& operator=(WeakPtr<Y>&& other) {
        if (counter != other.counter) {
            counter = other.counter;
            other.counter = nullptr;
        }
        return *this;
    }

    int use_count() const {
        return counter ? counter->getShareCount() : 0;
    }

    bool expired() const {
        return use_count() == 0;
    }

    SharedPtr<T> lock() const {
        return expired() ? SharedPtr<T>() : SharedPtr<T>(*this);
    }

    T* operator->() const {
        return counter->get();
    }

    T* get() const {
        return counter->get();
    }

    T& operator*() const {
        return *(counter->get());
    }

    operator bool() const {
        return expired();
    }

private:
    SharedCounter<T>* counter;
};