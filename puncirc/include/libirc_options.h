#ifndef INCLUDE_IRC_OPTIONS_H
#define INCLUDE_IRC_OPTIONS_H

#ifndef IN_INCLUDE_LIBIRC_H
	#error This file should not be included directly, include just libircclient.h
#endif

/*! 
 * enables additional debug output 
 * \ingroup options
 */
#define LIBIRC_OPTION_DEBUG			(1 << 1)

/*! \brief allows to strip origins automatically.
 *
 * For every IRC server event, the event origin is sent in standard form:
 * nick!host\@ircserver, i.e. like tim!home\@irc.freenet.org. Such origins
 * can not be used in IRC commands, and need to be stripped (i.e. host and 
 * server part should be cut off) before using. This can be done either 
 * explicitly, by calling irc_target_get_nick(), or implicitly for all the 
 * events - by setting this option with irc_option_set().
 * \ingroup options
 */
#define LIBIRC_OPTION_STRIPNICKS	(1 << 2)


/*! \brief Disables the certificate verification for SSL connections
 *
 * By default the SSL connection authenticy is ensured by verifying that the certificate
 * presented by the server is signed by a known trusted certificate authority. Since those
 * typically cost money, some IRC servers use the self-signed certificates. They provide the
 * benefits of the SSL connection but since they are not signed by the Certificate Authority,
 * their authencity cannot be verified. This option, if set, disables the certificate 
 * verification - the library will accept any certificate presented by the server.
 * 
 * This option must be set before the irc_connect function is called.
 * \ingroup options
 */
#define LIBIRC_OPTION_SSL_NO_VERIFY (1 << 3)


#endif /* INCLUDE_IRC_OPTIONS_H */
