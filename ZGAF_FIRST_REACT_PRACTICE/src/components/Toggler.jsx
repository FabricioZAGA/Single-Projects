import React from 'react';

export default class Toggler extends React.Component {
    constructor(props, state) {
        super(props, state);
        this.state = {toggled: false}
    }

    toggleButton() {
        const { toggled } = this.state;
        this.setState({ toggled: !toggled});
    }

    render() {
        const { toggled } = this.state;
        return (
            <button onClick={this.toggleButton.bind(this)}>
                { toggled ? 'Hide' : 'Show' } 
            </button>
        )
    }
}