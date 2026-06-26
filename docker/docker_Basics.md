# Docker Basics

## What is Docker?
Docker is an open-source platform that allows developers to build, package, and run applications inside lightweight containers.

---

## Why Docker?
- Consistent development environment
- Faster deployment
- Lightweight compared to Virtual Machines
- Easy scalability
- Better resource utilization

---

## Features
- Lightweight
- Portable
- Isolated
- Fast startup
- Version control for images

---

## Docker Architecture
- Docker Client
- Docker Daemon (Engine)
- Docker Registry (Docker Hub)

Flow:
Client → Docker Engine → Docker Image → Docker Container

---

## Components

### Docker Engine
The core service that builds and runs containers.

### Dockerfile
A text file containing instructions to build an image.

### Docker Image
A read-only template used to create containers.

### Docker Container
A running instance of a Docker image.

### Docker Hub
A cloud repository used to store and share Docker images.

---

## Common Docker Commands

```bash
docker --version
docker images
docker ps
docker pull nginx
docker run nginx
docker stop <container_id>
docker rm <container_id>
docker rmi <image_id>
```

---

## Docker Editions

### Community Edition (CE)
- Free
- Suitable for learning and personal projects

### Enterprise Edition (EE)
- Paid
- Enterprise-grade security and support
