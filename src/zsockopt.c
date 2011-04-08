/*  =========================================================================
    zsockopt - get/set 0MQ socket options

    GENERATED SOURCE CODE, DO NOT EDIT
    -------------------------------------------------------------------------
    Copyright (c) 1991-2011 iMatix Corporation <www.imatix.com>
    Copyright other contributors as noted in the AUTHORS file.

    This file is part of libzapi, the high-level C binding for 0MQ:
    http://libzapi.zeromq.org.

    This is free software; you can redistribute it and/or modify it under
    the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation; either version 3 of the License, or (at
    your option) any later version.

    This software is distributed in the hope that it will be useful, but
    WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this program. If not, see
    <http://www.gnu.org/licenses/>.
    =========================================================================
*/

/*
@header
    The zsockopt class provides access to the 0MQ getsockopt/setsockopt API.
@discuss
    This class is generated, using the GSL code generator. See the sockopts
    XML file, which provides the metadata, and the sockopts.gsl template,
    which does the work.
@end
*/

#include "../include/zapi_prelude.h"
#include "../include/zctx.h"
#include "../include/zsocket.h"
#include "../include/zsockopt.h"


//  --------------------------------------------------------------------------
//  Set socket ZMQ_HWM value

void
zsockopt_set_hwm (void *socket, int hwm)
{
    uint64_t value = hwm;
    int rc = zmq_setsockopt (socket, ZMQ_HWM, &value, sizeof (value));
    assert (rc == 0 || errno == ETERM);
}



//  --------------------------------------------------------------------------
//  Return socket ZMQ_HWM value
int
zsockopt_hwm (void *socket)
{
    uint64_t hwm;
    size_t type_size = sizeof (hwm);
    zmq_getsockopt (socket, ZMQ_HWM, &hwm, &type_size);
    return (int) hwm;
}


//  --------------------------------------------------------------------------
//  Set socket ZMQ_SWAP value

void
zsockopt_set_swap (void *socket, int swap)
{
    int64_t value = swap;
    int rc = zmq_setsockopt (socket, ZMQ_SWAP, &value, sizeof (value));
    assert (rc == 0 || errno == ETERM);
}



//  --------------------------------------------------------------------------
//  Return socket ZMQ_SWAP value
int
zsockopt_swap (void *socket)
{
    int64_t swap;
    size_t type_size = sizeof (swap);
    zmq_getsockopt (socket, ZMQ_SWAP, &swap, &type_size);
    return (int) swap;
}


//  --------------------------------------------------------------------------
//  Set socket ZMQ_AFFINITY value

void
zsockopt_set_affinity (void *socket, int affinity)
{
    uint64_t value = affinity;
    int rc = zmq_setsockopt (socket, ZMQ_AFFINITY, &value, sizeof (value));
    assert (rc == 0 || errno == ETERM);
}



//  --------------------------------------------------------------------------
//  Return socket ZMQ_AFFINITY value
int
zsockopt_affinity (void *socket)
{
    uint64_t affinity;
    size_t type_size = sizeof (affinity);
    zmq_getsockopt (socket, ZMQ_AFFINITY, &affinity, &type_size);
    return (int) affinity;
}


//  --------------------------------------------------------------------------
//  Set socket ZMQ_IDENTITY value

void
zsockopt_set_identity (void *socket, char * identity)
{
    int rc = zmq_setsockopt (socket, ZMQ_IDENTITY, identity, strlen (identity));
    assert (rc == 0 || errno == ETERM);
}


//  --------------------------------------------------------------------------
//  Set socket ZMQ_RATE value

void
zsockopt_set_rate (void *socket, int rate)
{
    int64_t value = rate;
    int rc = zmq_setsockopt (socket, ZMQ_RATE, &value, sizeof (value));
    assert (rc == 0 || errno == ETERM);
}



//  --------------------------------------------------------------------------
//  Return socket ZMQ_RATE value
int
zsockopt_rate (void *socket)
{
    int64_t rate;
    size_t type_size = sizeof (rate);
    zmq_getsockopt (socket, ZMQ_RATE, &rate, &type_size);
    return (int) rate;
}


//  --------------------------------------------------------------------------
//  Set socket ZMQ_RECOVERY_IVL value

void
zsockopt_set_recovery_ivl (void *socket, int recovery_ivl)
{
    int64_t value = recovery_ivl;
    int rc = zmq_setsockopt (socket, ZMQ_RECOVERY_IVL, &value, sizeof (value));
    assert (rc == 0 || errno == ETERM);
}



//  --------------------------------------------------------------------------
//  Return socket ZMQ_RECOVERY_IVL value
int
zsockopt_recovery_ivl (void *socket)
{
    int64_t recovery_ivl;
    size_t type_size = sizeof (recovery_ivl);
    zmq_getsockopt (socket, ZMQ_RECOVERY_IVL, &recovery_ivl, &type_size);
    return (int) recovery_ivl;
}


//  --------------------------------------------------------------------------
//  Set socket ZMQ_RECOVERY_IVL_MSEC value

void
zsockopt_set_recovery_ivl_msec (void *socket, int recovery_ivl_msec)
{
    int64_t value = recovery_ivl_msec;
    int rc = zmq_setsockopt (socket, ZMQ_RECOVERY_IVL_MSEC, &value, sizeof (value));
    assert (rc == 0 || errno == ETERM);
}



//  --------------------------------------------------------------------------
//  Return socket ZMQ_RECOVERY_IVL_MSEC value
int
zsockopt_recovery_ivl_msec (void *socket)
{
    int64_t recovery_ivl_msec;
    size_t type_size = sizeof (recovery_ivl_msec);
    zmq_getsockopt (socket, ZMQ_RECOVERY_IVL_MSEC, &recovery_ivl_msec, &type_size);
    return (int) recovery_ivl_msec;
}


//  --------------------------------------------------------------------------
//  Set socket ZMQ_MCAST_LOOP value

void
zsockopt_set_mcast_loop (void *socket, int mcast_loop)
{
    int64_t value = mcast_loop;
    int rc = zmq_setsockopt (socket, ZMQ_MCAST_LOOP, &value, sizeof (value));
    assert (rc == 0 || errno == ETERM);
}



//  --------------------------------------------------------------------------
//  Return socket ZMQ_MCAST_LOOP value
int
zsockopt_mcast_loop (void *socket)
{
    int64_t mcast_loop;
    size_t type_size = sizeof (mcast_loop);
    zmq_getsockopt (socket, ZMQ_MCAST_LOOP, &mcast_loop, &type_size);
    return (int) mcast_loop;
}


//  --------------------------------------------------------------------------
//  Set socket ZMQ_SNDBUF value

void
zsockopt_set_sndbuf (void *socket, int sndbuf)
{
    uint64_t value = sndbuf;
    int rc = zmq_setsockopt (socket, ZMQ_SNDBUF, &value, sizeof (value));
    assert (rc == 0 || errno == ETERM);
}



//  --------------------------------------------------------------------------
//  Return socket ZMQ_SNDBUF value
int
zsockopt_sndbuf (void *socket)
{
    uint64_t sndbuf;
    size_t type_size = sizeof (sndbuf);
    zmq_getsockopt (socket, ZMQ_SNDBUF, &sndbuf, &type_size);
    return (int) sndbuf;
}


//  --------------------------------------------------------------------------
//  Set socket ZMQ_RCVBUF value

void
zsockopt_set_rcvbuf (void *socket, int rcvbuf)
{
    uint64_t value = rcvbuf;
    int rc = zmq_setsockopt (socket, ZMQ_RCVBUF, &value, sizeof (value));
    assert (rc == 0 || errno == ETERM);
}



//  --------------------------------------------------------------------------
//  Return socket ZMQ_RCVBUF value
int
zsockopt_rcvbuf (void *socket)
{
    uint64_t rcvbuf;
    size_t type_size = sizeof (rcvbuf);
    zmq_getsockopt (socket, ZMQ_RCVBUF, &rcvbuf, &type_size);
    return (int) rcvbuf;
}


//  --------------------------------------------------------------------------
//  Set socket ZMQ_LINGER value

void
zsockopt_set_linger (void *socket, int linger)
{
    int rc = zmq_setsockopt (socket, ZMQ_LINGER, &linger, sizeof (linger));
    assert (rc == 0 || errno == ETERM);
}



//  --------------------------------------------------------------------------
//  Return socket ZMQ_LINGER value
int
zsockopt_linger (void *socket)
{
    int linger;
    size_t type_size = sizeof (linger);
    zmq_getsockopt (socket, ZMQ_LINGER, &linger, &type_size);
    return linger;
}


//  --------------------------------------------------------------------------
//  Set socket ZMQ_RECONNECT_IVL value

void
zsockopt_set_reconnect_ivl (void *socket, int reconnect_ivl)
{
    int rc = zmq_setsockopt (socket, ZMQ_RECONNECT_IVL, &reconnect_ivl, sizeof (reconnect_ivl));
    assert (rc == 0 || errno == ETERM);
}



//  --------------------------------------------------------------------------
//  Return socket ZMQ_RECONNECT_IVL value
int
zsockopt_reconnect_ivl (void *socket)
{
    int reconnect_ivl;
    size_t type_size = sizeof (reconnect_ivl);
    zmq_getsockopt (socket, ZMQ_RECONNECT_IVL, &reconnect_ivl, &type_size);
    return reconnect_ivl;
}


//  --------------------------------------------------------------------------
//  Set socket ZMQ_RECONNECT_IVL_MAX value

void
zsockopt_set_reconnect_ivl_max (void *socket, int reconnect_ivl_max)
{
    int rc = zmq_setsockopt (socket, ZMQ_RECONNECT_IVL_MAX, &reconnect_ivl_max, sizeof (reconnect_ivl_max));
    assert (rc == 0 || errno == ETERM);
}



//  --------------------------------------------------------------------------
//  Return socket ZMQ_RECONNECT_IVL_MAX value
int
zsockopt_reconnect_ivl_max (void *socket)
{
    int reconnect_ivl_max;
    size_t type_size = sizeof (reconnect_ivl_max);
    zmq_getsockopt (socket, ZMQ_RECONNECT_IVL_MAX, &reconnect_ivl_max, &type_size);
    return reconnect_ivl_max;
}


//  --------------------------------------------------------------------------
//  Set socket ZMQ_BACKLOG value

void
zsockopt_set_backlog (void *socket, int backlog)
{
    int rc = zmq_setsockopt (socket, ZMQ_BACKLOG, &backlog, sizeof (backlog));
    assert (rc == 0 || errno == ETERM);
}



//  --------------------------------------------------------------------------
//  Return socket ZMQ_BACKLOG value
int
zsockopt_backlog (void *socket)
{
    int backlog;
    size_t type_size = sizeof (backlog);
    zmq_getsockopt (socket, ZMQ_BACKLOG, &backlog, &type_size);
    return backlog;
}


//  --------------------------------------------------------------------------
//  Set socket ZMQ_SUBSCRIBE value

void
zsockopt_set_subscribe (void *socket, char * subscribe)
{
    int rc = zmq_setsockopt (socket, ZMQ_SUBSCRIBE, subscribe, strlen (subscribe));
    assert (rc == 0 || errno == ETERM);
}


//  --------------------------------------------------------------------------
//  Set socket ZMQ_UNSUBSCRIBE value

void
zsockopt_set_unsubscribe (void *socket, char * unsubscribe)
{
    int rc = zmq_setsockopt (socket, ZMQ_UNSUBSCRIBE, unsubscribe, strlen (unsubscribe));
    assert (rc == 0 || errno == ETERM);
}



//  --------------------------------------------------------------------------
//  Return socket ZMQ_TYPE value
int
zsockopt_type (void *socket)
{
    int type;
    size_t type_size = sizeof (type);
    zmq_getsockopt (socket, ZMQ_TYPE, &type, &type_size);
    return type;
}



//  --------------------------------------------------------------------------
//  Return socket ZMQ_RCVMORE value
int
zsockopt_rcvmore (void *socket)
{
    int64_t rcvmore;
    size_t type_size = sizeof (rcvmore);
    zmq_getsockopt (socket, ZMQ_RCVMORE, &rcvmore, &type_size);
    return (int) rcvmore;
}



//  --------------------------------------------------------------------------
//  Return socket ZMQ_FD value
int
zsockopt_fd (void *socket)
{
    int fd;
    size_t type_size = sizeof (fd);
    zmq_getsockopt (socket, ZMQ_FD, &fd, &type_size);
    return fd;
}



//  --------------------------------------------------------------------------
//  Return socket ZMQ_EVENTS value
int
zsockopt_events (void *socket)
{
    uint32_t events;
    size_t type_size = sizeof (events);
    zmq_getsockopt (socket, ZMQ_EVENTS, &events, &type_size);
    return (int) events;
}


//  --------------------------------------------------------------------------
//  Selftest

int
zsockopt_test (Bool verbose)
{
    printf (" * zsockopt: ");

    //  @selftest
    zctx_t *ctx = zctx_new ();

    //  All options are valid on SUB sockets
    void *socket = zsocket_new (ctx, ZMQ_SUB);

    zsockopt_set_hwm (socket, 1);
    assert (zsockopt_hwm (socket) == 1);
    zsockopt_hwm (socket);
    zsockopt_set_swap (socket, 1);
    assert (zsockopt_swap (socket) == 1);
    zsockopt_swap (socket);
    zsockopt_set_affinity (socket, 1);
    assert (zsockopt_affinity (socket) == 1);
    zsockopt_affinity (socket);
    zsockopt_set_identity (socket, "test");
    zsockopt_set_rate (socket, 1);
    assert (zsockopt_rate (socket) == 1);
    zsockopt_rate (socket);
    zsockopt_set_recovery_ivl (socket, 1);
    assert (zsockopt_recovery_ivl (socket) == 1);
    zsockopt_recovery_ivl (socket);
    zsockopt_set_recovery_ivl_msec (socket, 1);
    assert (zsockopt_recovery_ivl_msec (socket) == 1);
    zsockopt_recovery_ivl_msec (socket);
    zsockopt_set_mcast_loop (socket, 1);
    assert (zsockopt_mcast_loop (socket) == 1);
    zsockopt_mcast_loop (socket);
    zsockopt_set_sndbuf (socket, 1);
    assert (zsockopt_sndbuf (socket) == 1);
    zsockopt_sndbuf (socket);
    zsockopt_set_rcvbuf (socket, 1);
    assert (zsockopt_rcvbuf (socket) == 1);
    zsockopt_rcvbuf (socket);
    zsockopt_set_linger (socket, 1);
    assert (zsockopt_linger (socket) == 1);
    zsockopt_linger (socket);
    zsockopt_set_reconnect_ivl (socket, 1);
    assert (zsockopt_reconnect_ivl (socket) == 1);
    zsockopt_reconnect_ivl (socket);
    zsockopt_set_reconnect_ivl_max (socket, 1);
    assert (zsockopt_reconnect_ivl_max (socket) == 1);
    zsockopt_reconnect_ivl_max (socket);
    zsockopt_set_backlog (socket, 1);
    assert (zsockopt_backlog (socket) == 1);
    zsockopt_backlog (socket);
    zsockopt_set_subscribe (socket, "test");
    zsockopt_set_unsubscribe (socket, "test");
    zsockopt_type (socket);
    zsockopt_rcvmore (socket);
    zsockopt_fd (socket);
    zsockopt_events (socket);

    zctx_destroy (&ctx);
    //  @end

    printf ("OK\n");
    return 0;
}