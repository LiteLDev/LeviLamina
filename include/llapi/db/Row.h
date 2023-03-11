#pragma once
#include "llapi/db/Any.h"
#include <unordered_map>
#include <vector>

namespace DB
{

class Row;


class RowHeader : private std::vector<std::string>
{

    using Base = std::vector<std::string>;
    std::vector<uint64_t> hashes;

public:
    /**
     * @brief Construct a new Row Header object.
     *
     */
    RowHeader() = default;
    /**
     * @brief Construct a new Row Header object.
     *
     * @param list  An initializer list like `{"col1", "col2", "col3"}`
     */
    LLAPI RowHeader(const std::initializer_list<std::string>& list);
    /// Move constructor
    RowHeader(RowHeader&& other) noexcept = default;
    /// Copy constructor
    RowHeader(const RowHeader& other) = default;
    /// Destructor
    ~RowHeader();
    /**
     * @brief Add a column to the header.
     *
     * @param  name  The name of the column
     * @return int   The index of the column
     */
    LLAPI size_t add(const std::string& name);
    /**
     * @brief Get whether the header contains a column.
     *
     * @param  name  The name of the column
     * @return bool  True if the column exists
     */
    LLAPI bool contains(const std::string& name);
    /**
     * @brief Remove a column from the header.
     *
     * @param  name  The name of the column
     * @throws std::out_of_range  If the column does not exist
     */
    LLAPI void remove(const std::string& name);
    /**
     * @brief Get the size of the header.
     *
     * @return int  The size of the header
     */
    LLAPI size_t size() const;
    /**
     * @brief Get weather the header is empty.
     *
     * @return bool  True if the header is empty
     */
    LLAPI bool empty() const;
    /**
     * @brief Get the index of a column.
     *
     * @param  name  The name of the column
     * @return int   The index of the column
     * @throws std::out_of_range  If the column does not exist
     */
    LLAPI size_t at(const std::string& name);
    /**
     * @brief Get the index of a column.
     *
     * @param  index         The index of the column
     * @return std::string&  The name of the column
     * @throws std::out_of_range  If the column does not exist
     */
    LLAPI std::string& at(size_t index);
    /**
     * @brief Get the iterator to the first element
     *
     * @return std::unordered_map<std::string, int>::iterator  The iterator
     */
    LLAPI std::vector<std::string>::iterator begin();
    /**
     * @brief Get the iterator to the last element.
     *
     * @return std::unordered_map<std::string, int>::iterator  The iterator
     */
    LLAPI std::vector<std::string>::iterator end();
    /**
     * @brief Check whether the row can be adapted to the header.
     *
     * @param  row  The row to adapt
     * @return bool True if the row can be adapted
     */
    LLAPI bool check(const Row& row) const;

    /**
     * @brief Get the index of a column.
     *
     * @param  name  The name of the column
     * @return int   The index of the column
     * @note   It will create the column(=add) if it does not exist
     */
    LLAPI size_t operator[](const std::string& name);
    /**
     * @brief Get the name of a column.
     *
     * @param  index         The index of the column
     * @return std::string&  The name of the column
     */
    LLAPI std::string& operator[](size_t index);

    /// Move assignment operator
    RowHeader& operator=(RowHeader&& other) noexcept = default;
    /// Copy assignment operator
    RowHeader& operator=(const RowHeader& other) = default;
};


class Row : public std::vector<Any>
{
public:
    std::shared_ptr<RowHeader> header; //!< The header of the row

    /**
     * @brief Construct a new Row object.
     *
     * @param header  The header(column names) of the row(shared_ptr)
     */
    LLAPI Row(const std::shared_ptr<RowHeader>& header = nullptr);
    /**
     * @brief Construct a new Row object.
     *
     * @param header  The header(column names) of the row
     * @note  This will create a shared_ptr of the header
     */
    LLAPI Row(const RowHeader& header);
    /**
     * @brief Construct a new Row object.
     *
     * @param list    List of values
     * @param header  The header(column names) of the row
     * @throw std::invalid_argument If the size of the list is not equal to the size of the header
     * @par Example
     * @code
     * RowHeader header{"id", "age", "name"};
     * Row row1({114, 24, "alex"}, header);
     * Row row2({514, 24, "steve"}, {"id", "age", "name"});
     * @endcode
     */
    LLAPI Row(const std::initializer_list<Any>& list, const RowHeader& header);
    /**
     * @brief Construct a new Row object.
     *
     * @param list    List of values
     * @param header  The header(column names) of the row(shared_ptr)
     * @throw std::invalid_argument If the size of the list is not equal to the size of the header
     */
    LLAPI Row(const std::initializer_list<Any>& list,
              const std::shared_ptr<RowHeader>& header = nullptr);
    /**
     * @brief Construct a new Row object(move).
     *
     * @param list    Vector of values
     * @param header  The header(column names) of the row
     * @throw std::invalid_argument If the size of the vector is not equal to the size of the header
     */
    LLAPI Row(std::vector<Any>&& list, const RowHeader& header);
    /**
     * @brief Construct a new Row object.
     *
     * @param list    Vector of values
     * @param header  The header(column names) of the row
     * @throw std::invalid_argument If the size of the vector is not equal to the size of the header
     */
    LLAPI Row(const std::vector<Any>& list, const RowHeader& header);
    /**
     * @brief Construct a new Row object(move).
     *
     * @param list  Vector of column names(header) and values
     * @par Example
     * @code
     * Row row({{"id", 114}, {"age", 2000}, {"name", "alex"}});
     * @endcode
     */
    LLAPI Row(const std::initializer_list<std::pair<std::string, Any>>& list);
    /// Move constructor
    LLAPI Row(Row&& other) noexcept;
    /// Copy constructor
    LLAPI Row(const Row& other);
    /// Move assignment operator
    LLAPI Row& operator=(Row&& other) noexcept;
    /// Copy assignment operator
    LLAPI Row& operator=(const Row& other);
    /**
     * @brief Get the value of a column
     *
     * @param  name  The name of the column
     * @return Any&    The value of the column
     * @note   It will create a new Any object if the column doesn't exist
     */
    LLAPI Any& operator[](const std::string& name);
    /**
     * @brief Get the value of a column
     *
     * @param  name  The name of the column
     * @return Any&    The value of the column
     * @see    Row::at
     */
    LLAPI const Any& operator[](const std::string& name) const;
    /**
     * @brief Get the value of a column
     *
     * @param  column  The name of the column
     * @return Any&    The value of the column
     * @throw  std::out_of_range If the column does not exist
     */
    LLAPI Any& at(const std::string& column);
    LLAPI const Any& at(const std::string& column) const;
    /**
     * @brief Traverse the row(references)
     *
     * @param cb  The function to call for each element
     * @note  Return false in callback function to stop the iteration
     */
    LLAPI void forEach_ref(std::function<bool(const std::string&, Any&)> cb);
    /**
     * @brief Traverse the row
     *
     * @param cb  The function to call for each element
     * @note  Return false in callback function to stop the iteration
     */
    LLAPI void forEach(std::function<bool(const std::string&, const Any&)> cb) const;
};

} // namespace DB

/**
 * @brief Function to convert a row to T.
 *
 * @tparam T    The type to convert to
 * @param  row  A row
 * @return T    The converted value
 */
template <typename T>
inline T row_to(const DB::Row& row)
{
    throw std::bad_cast();
}

template <>
inline DB::Row row_to(const DB::Row& row)
{
    return row;
}