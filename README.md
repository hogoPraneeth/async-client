# async-client
Asynchronous C++ HTTP client.

# This is Work In Progress for Practice.

- Idea is to implement a Go http.Client like library in C++11  and later.

# Behavior:

- Client is a class that holds all the connections initiated from the process using this
  client instance.
- Client Asynchronously uses Keep-Alive for the pool of connections.
- Client will initiate another connection if the Body is not completely read.
- Each GET and POST will be carried out in it's own thread.
- Experiment with POSIX thread or Future-Promise.
- Try using different mapping alternatives for _connection vs file desc_.
- Use Google Test for testing.
