#!/bin/bash
find . | wc -l | sed 's/[[:blank:]]//g'
