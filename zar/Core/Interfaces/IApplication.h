﻿#pragma once

namespace zar
{
    class __declspec(dllexport) IApplication
    {
    public:
        inline virtual ~IApplication() = default;
        inline IApplication() = default;

        inline virtual void start() = 0;
        inline virtual void update() = 0;
        inline virtual void render() = 0;

        int _width;
        int _height;
    };
}
