/**
 * @file: priv_TCP_transport.hpp
 * @author: Praneeth Patil
 * @brief: This file defines TCP Transport concrete class. TCPTransport
 * implementes Transport interface.
 */
#include "transport.hpp"

/**
 * @breif: TCPTransport implements Transport interface with TCP connectivity.
 * TCPTranspoprt holds all the aspects of a connection oriented protocol and
 * keep-alive mechanism. Each instance of a TCPTransport is analogous to a TCP
 * client.
 */
class TCPTransport : public Transport {
public:
 /**
     * @brief:  Connect method is used to establish a connection with the remote
     *          server for a given URL.
     * @param(in): URL string.
     * @return: Returns STATUS.Success if no errors were found else an
     *          appropriate STATUS code.
     */
    STATUS Connect(std::string url);
    /**
     * @brief:  Tells the caller if connections is still intact and can be used
     *          for sending and receiving.         
     * @param(in): URL string.
     * @return: Returns true if connection is still active, false otherwise.
     */
    bool IsConnected();

    // FIXME: Make pointer either smart or use byte/bytestream.
    // FIXME: How to limit the data buffer size? How to sequence the data?
    /**
     * @brief:  Sends data over the established connection.   
     * @param(in): Data in the form of byte buffer.
     * @return: Returns STATUS.Success is data was completely transmitted,
     * STATUS error codes otherwise.
     */
    STATUS Send(char* buf);
    /**
     * @brief:  Receives data over the established connection. Data in the form * of byte buffer is returned.
     * NOTE: The buffer memory is allocated by Receive method and the ownership * of the buffer will be transferred to the called. 
     * @param(out): Data in the form of byte buffer is returned. 
     * @return: Returns STATUS.Success is data was completely transmitted,
     * STATUS error codes otherwise.
     */
    STATUS Receive(char* buf);
    private:
        int fd; //<< File descriptor of the connection.
};