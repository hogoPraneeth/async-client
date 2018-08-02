/**
 * @file: status.hpp
 * @author: Praneeth Patil
 * @brief: Defines client errors in enum format.
 */

// TODO: enum class should let you have strings like Success("Succcess")?
enum class STATUS {
    SUCCESS = 0,
    HOST_NOT_REACHABLE,
    BAD_URL,
};