
#include <cstddef>
#include <functional>
#include <vector>

template <typename T, typename Comparator = std::less<T>>
class MovePriorityQueue {
private:
    typedef std::vector<T>                 Base;
    typedef std::vector<T>::const_iterator const_iterator;

public:
    Base mC;

public:
    [[nodiscard]] T pop() {
        std::pop_heap(mC.begin(), mC.end(), Comparator());
        T result = std::move(mC.back());
        mC.pop_back();
        return result;
    }

    [[nodiscard]] T const& top() { return mC.front(); };

    [[nodiscard]] bool empty() { return mC.empty(); };

    [[nodiscard]] size_t size() { return mC.size(); };

    [[nodiscard]] const_iterator begin() { return mC.begin(); };

    [[nodiscard]] const_iterator end() { return mC.end(); };

    [[nodiscard]] Base& getInternalContainer() { return mC; }

    void clear() { mC.clear(); }

    void resort() { std::make_heap(mC.begin(), mC.end(), Comparator()); };
};